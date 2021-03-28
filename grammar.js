module.exports = grammar({
  name: 'sql',

  word: $ => $._name,

  rules: {
    source_file: $ => repeat(
      choice($.comment, $._definition),
    ),

    _definition: $ => seq(
      choice(
        $.select_statement,
        $.update_statement,
      ),
      optional(';'),
    ),

    subquery: $ => bracket_rule($.select_statement),

    clause_body: $ => $.clause_statement,

    clause_statement: $ => repeat_comma(
      $.symbole_definition,
    ),

    select_statement: $ => seq(
      $.select_clause,
      optional($.from_clause),
      optional($.where_clause),
      optional($.group_by_clause),
      optional($.having_clause),
      optional($.order_by_clause),
      optional($.limit_clause),
    ),

    select_clause: $ => seq(
      keyword('SELECT'),
      alias($._select_body, $.clause_body),
    ),

    _select_body: $ => alias(
      seq(
        optional(
          seq(keyword('TOP'), $.number),
        ),
        repeat_comma(
          choice('*', $.symbole_definition),
        ),
      ),
      $.clause_statement
    ),

    from_clause: $ => seq(
      keyword('FROM'),
      alias($._from_body, $.clause_body),
    ),

    _from_body: $ => seq(
      alias($.symbole_definition, $.clause_statement),
      repeat($.join_clause),
    ),

    update_statement: $ => seq(
      $.update_clause,
      repeat($.join_clause),
      $.set_clause,
      optional($.where_clause),
      optional($.limit_clause),
    ),

    update_clause: $ => seq(
      keyword('UPDATE'),
      alias($._update_body, $.clause_body),
    ),

    _update_body: $ => alias($.symbole_definition, $.clause_statement),

    set_clause: $ => seq(
      keyword('SET'),
      alias($._set_body, $.clause_statement),
    ),

    _set_body: $ => alias(
      repeat_comma(
        seq(
          $.identifier,
          '=',
          choice($._value, $.subquery),
        ),
      ),
      $.clause_statement,
    ),

    join_clause: $ => seq(
      optional(
        choice(
          keyword('INNER'),
          keyword('OUTER'),
          keyword('LEFT'),
          keyword('RIGHT'),
        ),
      ),
      keyword('JOIN'),
      alias($._join_body, $.clause_body),
      keyword('ON'),
      alias($._conditions_body, $.clause_body),
    ),

    _join_body: $ => alias($.symbole_definition, $.clause_statement),

    where_clause: $ => seq(
      keyword('WHERE'),
      alias($._conditions_body, $.clause_body),
    ),

    _conditions_body: $ => alias($._conditions, $.clause_statement),

    _conditions: $ => choice(
      $.subcondition,
      seq(
        $.condition,
        repeat(
          choice(
            seq(keyword('AND'), $.condition),
            seq(keyword('AND'), $.subcondition),
            seq(keyword('OR'), $.condition),
            seq(keyword('OR'), $.subcondition),
          ),
        ),
      ),
    ),

    subcondition: $ => bracket_rule($._conditions),

    condition: $ => seq(
      $._value,
      choice(
        seq(
          choice('=', '<>', '<', '<=', '>', '>='),
          $._value,
        ),
        seq(
          optional(keyword('NOT')),
          keyword('IN'),
          bracket_rule(repeat_comma($._value))
        ),
        seq(
          keyword('IS'),
          optional(keyword('NOT')),
          $.null,
        ),
        seq(
          keyword('BETWEEN'),
          $._value,
          keyword('AND'),
          $._value,
        ),
      ),
    ),

    group_by_clause: $ => seq(
      keyword('GROUP'),
      keyword('BY'),
      alias($._group_by_body, $.clause_body),
    ),

    _group_by_body: $ => alias(repeat_comma($.symbole_definition), $.clause_statement),

    having_clause: $ => seq(
      keyword('HAVING'),
      alias($._conditions_body, $.clause_body),
    ),

    order_by_clause: $ => seq(
      keyword('ORDER'),
      keyword('BY'),
      alias($._order_by_body, $.clause_body),
    ),

    _order_by_body: $ => alias(
        repeat_comma(
        seq(
          $.symbole_definition,
          optional(
            choice(keyword('ASC'), keyword('DESC')),
          ),
        ),
      ),
      $.clause_statement,
    ),

    limit_clause: $ => seq(
      keyword('LIMIT'),
      alias($._limit_body, $.clause_body),
    ),

    _limit_body: $ => alias($.number, $.clause_statement),

    symbole_definition: $ => seq(
      choice(
        $.identifier,
        $.subquery,
      ),
      optional(
        seq(
          keyword('AS'),
          field('alias', alias($._name, $.identifier)),
        ),
      ),
    ),

    _value: $ => choice(
      $.function_call_expression,
      $.identifier,
      $.binary_expression,
      $.number,
      $.float,
      $.string,
      $.boolean,
    ),

    function_call_expression: $ => seq(
      field(
        'function',
        alias($._name, $.identifier),
      ),
      bracket_rule(repeat_comma($._value)),
    ),
    binary_expression: $ => seq(
      choice($.identifier, $.number),
      choice('+', '-', '/', '*', '%', '&', '|', '^', '~', '<<', '>>'),
      choice($.identifier, $.number),
    ),
    comment: () => token(choice(
      seq(
        '--',
        repeat(/[^\r\n]/),
        optional(/\r?\n/),
      ),
      seq(
        '/*',
        /[^*]*\*+([^/*][^*]*\*+)*/,
        '/',
      )
    )),
    identifier: $ => repeat_str($.name, '.'),
    name: $ => choice(
      $._name,
      seq('`', $._name, '`'),
      seq('[', $._name, ']'),
    ),
    number: () =>  /[1-9]\d*/,
    float: () =>  /[1-9]\d*\.\d+/,
    string: () =>  /'[^']*'/,
    boolean: () =>  choice(keyword('TRUE'), keyword('FALSE')),
    null: () =>  keyword('NULL'),

    _name: () => /[a-zA-Z][_a-zA-Z\d]*/,
  },
});

function keyword(word) {
  const result = choice(
    word.toLocaleUpperCase(),
    word.toLocaleLowerCase(),
  );
  return alias(result , word);
}

function repeat_comma(rule) {
  return repeat_str(rule, ',');
}

function repeat_str(rule, str) {
  return seq(
    repeat(
      seq(rule, str),
    ),
    rule,
  );
}

function bracket_rule(rule) {
  return seq(
    '(',
    rule,
    ')',
  );
}

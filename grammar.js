module.exports = grammar({
  name: 'sql',

  word: $ => $._name,

  rules: {
    source_file: $ => repeat(
      choice($.comment, $._definition),
    ),

    _definition: $ => seq(
      choice(
        $.create_statement,
        $.drop_statement,
        $.select_statement,
        $.update_statement,
        $.insert_statement,
        $.delete_statement,
      ),
      optional(';'),
    ),

    subquery: $ => bracket_rule($.select_statement),

    clause_body: $ => $.clause_statement,

    clause_statement: $ => repeat_comma(
      $.symbole_definition,
    ),

    create_statement: $ => seq(
      $.create_clause,
    ),

    create_clause: $ => seq(
      keyword('CREATE'),
      keyword('DATABASE'),
      alias($.identifier, $.clause_body),
    ),

    drop_statement: $ => seq(
      $.drop_clause,
    ),

    drop_clause: $ => seq(
      keyword('DROP'),
      choice(keyword('DATABASE'), keyword('TABLE')),
      alias($.identifier, $.clause_body),
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

    _select_body: $ => seq(
      optional(
        alias($._select_top_statement, $.clause_statement),
      ),
      repeat_comma(
        alias($._select_fields_statement, $.clause_statement),
      ),
    ),

    _select_top_statement: $ => seq(
      keyword('TOP'),
      $.number,
    ),

    _select_fields_statement: $ => choice(
      '*',
      seq(repeat_str($.name, '.'), '.', '*'),
      $.symbole_definition
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

    _set_body: $ => repeat_comma(
      alias($._set_statement, $.clause_statement),
    ),

    _set_statement: $ => seq(
      $.identifier,
      '=',
      choice($._value, $.subquery),
    ),

    insert_statement: $ => seq(
      $.insert_clause,
      choice($.value_clause, $.select_statement),
    ),

    insert_clause: $ => seq(
      keyword('INSERT'),
      keyword('INTO'),
      alias($._insert_table_body, $.clause_body),
      optional(alias($._insert_field_body, $.clause_body)),
    ),

    _insert_table_body: $ => alias($.identifier, $.clause_statement),

    _insert_field_body: $ => bracket_rule(
      repeat_comma(alias($.identifier, $.clause_statement)),
    ),

    delete_statement: $ => seq(
      $.delete_clause,
      $.from_clause,
      optional($.where_clause),
      optional($.limit_clause),
    ),

    delete_clause: () => keyword('DELETE'),

    value_clause: $ => seq(
      keyword('VALUES'),
      repeat_comma(alias($._value_body, $.clause_body)),
    ),

    _value_body: $ => bracket_rule(
      repeat_comma(
        alias($._value, $.clause_statement),
      ),
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

    _conditions_body: $ => choice(
      alias($._subcondition, $.clause_body),
      seq(
        alias($._condition, $.clause_statement),
        repeat(
          seq(
            choice(keyword('AND'), keyword('OR')),
            choice(
              alias($._condition, $.clause_statement),
              alias($._subcondition, $.clause_body),
            ),
          )
        ),
      ),
    ),

    _subcondition: $ => bracket_rule($._conditions_body),

    _condition: $ => seq(
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

    _group_by_body: $ => repeat_comma(alias($.identifier, $.clause_statement)),

    having_clause: $ => seq(
      keyword('HAVING'),
      alias($._conditions_body, $.clause_body),
    ),

    order_by_clause: $ => seq(
      keyword('ORDER'),
      keyword('BY'),
      alias($._order_by_body, $.clause_body),
    ),

    _order_by_body: $ => repeat_comma(
        alias($._order_by_statement, $.clause_statement),
    ),

    _order_by_statement: $ => seq(
      $.symbole_definition,
      optional(
        choice(keyword('ASC'), keyword('DESC')),
      ),
    ),

    limit_clause: $ => seq(
      keyword('LIMIT'),
      alias($.number, $.clause_body),
    ),

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
    number: () => choice(/0?\d+/, /0[xX][0-9a-fA-F]+/),
    float: () =>  choice(/0\.\d+/, /[1-9]\d*\.\d+/),
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

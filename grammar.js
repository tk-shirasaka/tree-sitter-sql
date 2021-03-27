module.exports = grammar({
  name: 'sql',

  word: $ => $._name,

  rules: {
    source_file: $ => repeat(
      $._definition,
    ),

    _definition: $ => seq(
      choice(
        $.select_statement,
        $.update_statement,
      ),
      optional(';'),
    ),

    subquery: $ => seq(
      '(',
      $.select_statement,
      ')',
    ),

    select_statement: $ => seq(
      $.select_clause,
      optional($.from_clause),
      optional($.where_clause),
      optional($.limit_clause),
    ),

    select_clause: $ => seq(
      keyword('SELECT'),
      optional(
        seq(keyword('TOP'), $.number),
      ),
      field('fields', $._select_fields),
    ),

    _select_fields: $ => repeat_comma(
      choice(
        '*',
        $.symbole_definition,
      ),
    ),

    from_clause: $ => seq(
      keyword('FROM'),
      field('table', $.symbole_definition),
      optional($.join_clause),
    ),

    update_statement: $ => seq(
      $.update_clause,
      optional($.join_clause),
      $.set_clause,
      optional($.where_clause),
      optional($.limit_clause),
    ),

    update_clause: $ => seq(
      keyword('UPDATE'),
      field('table', $.symbole_definition),
    ),

    set_clause: $ => seq(
      keyword('SET'),
      $.update_fields,
    ),

    update_fields: $ => repeat_comma(
      seq(
        $._field_expression,
        '=',
        choice($._value, $.subquery),
      ),
    ),

    join_clause: $ => seq(
      optional(
        choice(
          keyword('INNER'),
          keyword('LEFT'),
          keyword('RIGHT'),
        ),
      ),
      keyword('JOIN'),
      $.symbole_definition,
      keyword('ON'),
      $.conditions,
    ),

    where_clause: $ => seq(
      keyword('WHERE'),
      $.conditions,
    ),

    conditions: $ => choice(
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

    subcondition: $ => seq(
      '(',
      $.conditions,
      ')',
    ),

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
          '(',
          repeat_comma($._value),
          ')',
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

    limit_clause: $ => seq(
      keyword('LIMIT'),
      $.number,
    ),

    symbole_definition: $ => seq(
      choice(
        $._field_expression,
        $.subquery,
      ),
      optional($._aliase),
    ),

    _aliase: $ => seq(
      keyword('AS'),
      field('alias', $._identifier),
    ),

    _field_expression: $ => seq(
        repeat(
          seq($._identifier, '.'),
      ),
      field('name', $._identifier),
    ),

    _value: $ => choice(
      $._field_expression,
      $.number,
      $.string,
      $.boolean,
    ),

    _identifier: $ => choice(
      $._name,
      seq('`', $._name, '`'),
      seq('[', $._name, ']'),
    ),

    _name: () => /[a-zA-Z][_a-zA-Z\d]*/,
    number: () =>  /[1-9]\d*/,
    string: () =>  /'[^']*'/,
    boolean: () =>  choice(keyword('TRUE'), keyword('FALSE')),
    null: () =>  keyword('NULL'),
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
  return seq(
    repeat(
      seq(rule, ','),
    ),
    rule,
  );
}

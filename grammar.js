module.exports = grammar({
  name: 'sql',

  rules: {
    source_file: $ => repeat(
      $._definition,
    ),

    _definition: $ => choice(
      $.select_statement,
      $.update_statement,
    ),

    select_statement: $ => seq(
      $.select_clause,
      optional($.from_clause),
      optional($.where_clause),
      optional($.limit_clause),
      optional(';'),
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
      choice(
        field('table', $.symbole_definition),
        seq('(', $.select_statement, ')', $._aliase),
      ),
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
        $._value,
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
      choice(
        seq('(', $.conditions, ')'),
        $.condition,
      ),
    ),

    where_clause: $ => choice(
      keyword('WHERE'),
      $.conditions,
    ),

    conditions: $ => seq(
      $.condition,
      optional(
        seq(
          choice(
            keyword('AND'),
            keyword('OR'),
          ),
          choice(
            seq(
              '(',
              $.conditions,
              ')',
            ),
            $.conditions,
          ),
        )
      ),
    ),

    condition: $ => seq(
      $._field_expression,
      choice(
        seq(
          choice(
            '=',
            '<>',
            '<',
            '<=',
            '>',
            '>=',
          ),
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
      $._field_expression,
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

    _name: () => /[a-zA-Z][a-zA-Z0-9_]*/,
    number: () =>  /[1-9][0-9]*/,
    string: () =>  /'[^']*'/,
    boolean: () =>  choice(keyword('TRUE'), keyword('FALSE')),
    null: () =>  keyword('NULL'),
  },
});

function keyword(word) {
  return choice(
    word.toLocaleUpperCase(),
    word.toLocaleLowerCase(),
  );
}

function repeat_comma(rule) {
  return seq(
    repeat(
      seq(rule, ','),
    ),
    rule,
  );
}

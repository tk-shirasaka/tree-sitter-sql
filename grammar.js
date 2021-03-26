module.exports = grammar({
  name: 'sql',

  rules: {
    source_file: $ => seq(
      $._definition,
      optional(
        seq(
          ';',
          optional($._definition),
        )
      )
    ),

    _definition: $ => choice(
      $.select_statement,
      $.update_statement,
    ),

    select_statement: $ => seq(
      keyword('SELECT'),
      optional(
        seq(
          keyword('TOP'),
          $._number,
        ),
      ),
      $.select_fields,
      optional($.from_clause),
      optional($.where_clause),
      optional($.limit_clause),
    ),

    select_fields: $ => seq(
      $._select_field,
      optional(
        seq(
          ',',
          $.select_fields,
        ),
      ),
    ),

    _select_field: $ => choice(
      '*',
      $.symbole_definition,
    ),

    from_clause: $ => seq(
      keyword('FROM'),
      choice(
        $.symbole_definition,
        seq(
          '(',
          $.select_statement,
          ')',
          $._aliase,
        ),
      ),
      optional($.join_clause),
    ),

    update_statement: $ => seq(
      keyword('UPDATE'),
      $.symbole_definition,
      optional($.join_clause),
      keyword('SET'),
      $.update_fields,
      optional($.where_clause),
      optional($.limit_clause),
    ),

    update_fields: $ => choice(
      $._update_field,
      optional(
        seq(
          ',',
          $._update_field,
        ),
      ),
    ),

    _update_field: $ => seq(
      $.symbole_definition,
      '=',
      choice(
        $.symbole_definition,
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
        seq(
          '(',
          $.conditions,
          ')',
        ),
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
      $.field_expression,
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
          $._value,
          optional(
            seq(
              ',',
              $._value,
            ),
          ),
          ')',
        ),
        seq(
          keyword('IS'),
          optional(keyword('NOT')),
          $._null,
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
      $._number,
    ),

    field_expression: $ => seq(
      $._field_expression,
      optional(
        seq(
          '.',
          $.field_expression,
        ),
      ),
    ),

    symbole_definition: $ => seq(
      $.field_expression,
      optional($._aliase),
    ),

    _aliase: $ => seq(
      keyword('AS'),
      $._identifier,
    ),

    _field_expression: $ => choice(
      $._identifier,
      seq('`', $._identifier, '`'),
      seq('`', $._identifier, '`'),
      seq('[', $._identifier, ']'),
    ),

    _value: $ => choice(
      $._identifier,
      $._number,
      $._string,
      $._boolean,
    ),

    _identifier: () => /[a-zA-Z][a-zA-Z0-9_]*/,
    _number: () =>  /[1-9][0-9]*/,
    _string: () =>  /'[^']*'/,
    _boolean: () =>  choice(
      keyword('TRUE'),
      keyword('FALSE'),
    ),
    _null: () =>  keyword('NULL'),
  },
});

function keyword(word) {
  return choice(
    word.toLocaleUpperCase(),
    word.toLocaleLowerCase(),
  );
}

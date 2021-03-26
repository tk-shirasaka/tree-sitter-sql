#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 141
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 77
#define ALIAS_COUNT 0
#define TOKEN_COUNT 59
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_SEMI = 1,
  anon_sym_SELECT = 2,
  anon_sym_select = 3,
  anon_sym_TOP = 4,
  anon_sym_top = 5,
  anon_sym_COMMA = 6,
  anon_sym_STAR = 7,
  anon_sym_FROM = 8,
  anon_sym_from = 9,
  anon_sym_LPAREN = 10,
  anon_sym_RPAREN = 11,
  anon_sym_INNER = 12,
  anon_sym_inner = 13,
  anon_sym_LEFT = 14,
  anon_sym_left = 15,
  anon_sym_RIGHT = 16,
  anon_sym_right = 17,
  anon_sym_JOIN = 18,
  anon_sym_join = 19,
  anon_sym_ON = 20,
  anon_sym_on = 21,
  anon_sym_WHERE = 22,
  anon_sym_where = 23,
  anon_sym_AND = 24,
  anon_sym_and = 25,
  anon_sym_OR = 26,
  anon_sym_or = 27,
  anon_sym_EQ = 28,
  anon_sym_LT_GT = 29,
  anon_sym_LT = 30,
  anon_sym_LT_EQ = 31,
  anon_sym_GT = 32,
  anon_sym_GT_EQ = 33,
  anon_sym_NOT = 34,
  anon_sym_not = 35,
  anon_sym_IN = 36,
  anon_sym_in = 37,
  anon_sym_IS = 38,
  anon_sym_is = 39,
  anon_sym_BETWEEN = 40,
  anon_sym_between = 41,
  anon_sym_LIMIT = 42,
  anon_sym_limit = 43,
  anon_sym_DOT = 44,
  anon_sym_AS = 45,
  anon_sym_as = 46,
  anon_sym_BQUOTE = 47,
  anon_sym_LBRACK = 48,
  anon_sym_RBRACK = 49,
  sym__identifier = 50,
  sym__number = 51,
  sym__string = 52,
  anon_sym_TRUE = 53,
  anon_sym_true = 54,
  anon_sym_FALSE = 55,
  anon_sym_false = 56,
  anon_sym_NULL = 57,
  anon_sym_null = 58,
  sym_source_file = 59,
  sym__definition = 60,
  sym_select_statement = 61,
  sym_select_fields = 62,
  sym__select_field = 63,
  sym_from_clause = 64,
  sym_join_clause = 65,
  sym_where_clause = 66,
  sym_conditions = 67,
  sym_condition = 68,
  sym_limit_clause = 69,
  sym_field_expression = 70,
  sym_symbole_definition = 71,
  sym__aliase = 72,
  sym__field_expression = 73,
  sym__value = 74,
  sym__boolean = 75,
  sym__null = 76,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SEMI] = ";",
  [anon_sym_SELECT] = "SELECT",
  [anon_sym_select] = "select",
  [anon_sym_TOP] = "TOP",
  [anon_sym_top] = "top",
  [anon_sym_COMMA] = ",",
  [anon_sym_STAR] = "*",
  [anon_sym_FROM] = "FROM",
  [anon_sym_from] = "from",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_INNER] = "INNER",
  [anon_sym_inner] = "inner",
  [anon_sym_LEFT] = "LEFT",
  [anon_sym_left] = "left",
  [anon_sym_RIGHT] = "RIGHT",
  [anon_sym_right] = "right",
  [anon_sym_JOIN] = "JOIN",
  [anon_sym_join] = "join",
  [anon_sym_ON] = "ON",
  [anon_sym_on] = "on",
  [anon_sym_WHERE] = "WHERE",
  [anon_sym_where] = "where",
  [anon_sym_AND] = "AND",
  [anon_sym_and] = "and",
  [anon_sym_OR] = "OR",
  [anon_sym_or] = "or",
  [anon_sym_EQ] = "=",
  [anon_sym_LT_GT] = "<>",
  [anon_sym_LT] = "<",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT] = ">",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_NOT] = "NOT",
  [anon_sym_not] = "not",
  [anon_sym_IN] = "IN",
  [anon_sym_in] = "in",
  [anon_sym_IS] = "IS",
  [anon_sym_is] = "is",
  [anon_sym_BETWEEN] = "BETWEEN",
  [anon_sym_between] = "between",
  [anon_sym_LIMIT] = "LIMIT",
  [anon_sym_limit] = "limit",
  [anon_sym_DOT] = ".",
  [anon_sym_AS] = "AS",
  [anon_sym_as] = "as",
  [anon_sym_BQUOTE] = "`",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [sym__identifier] = "_identifier",
  [sym__number] = "_number",
  [sym__string] = "_string",
  [anon_sym_TRUE] = "TRUE",
  [anon_sym_true] = "true",
  [anon_sym_FALSE] = "FALSE",
  [anon_sym_false] = "false",
  [anon_sym_NULL] = "NULL",
  [anon_sym_null] = "null",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_select_statement] = "select_statement",
  [sym_select_fields] = "select_fields",
  [sym__select_field] = "_select_field",
  [sym_from_clause] = "from_clause",
  [sym_join_clause] = "join_clause",
  [sym_where_clause] = "where_clause",
  [sym_conditions] = "conditions",
  [sym_condition] = "condition",
  [sym_limit_clause] = "limit_clause",
  [sym_field_expression] = "field_expression",
  [sym_symbole_definition] = "symbole_definition",
  [sym__aliase] = "_aliase",
  [sym__field_expression] = "_field_expression",
  [sym__value] = "_value",
  [sym__boolean] = "_boolean",
  [sym__null] = "_null",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_SELECT] = anon_sym_SELECT,
  [anon_sym_select] = anon_sym_select,
  [anon_sym_TOP] = anon_sym_TOP,
  [anon_sym_top] = anon_sym_top,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_FROM] = anon_sym_FROM,
  [anon_sym_from] = anon_sym_from,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_INNER] = anon_sym_INNER,
  [anon_sym_inner] = anon_sym_inner,
  [anon_sym_LEFT] = anon_sym_LEFT,
  [anon_sym_left] = anon_sym_left,
  [anon_sym_RIGHT] = anon_sym_RIGHT,
  [anon_sym_right] = anon_sym_right,
  [anon_sym_JOIN] = anon_sym_JOIN,
  [anon_sym_join] = anon_sym_join,
  [anon_sym_ON] = anon_sym_ON,
  [anon_sym_on] = anon_sym_on,
  [anon_sym_WHERE] = anon_sym_WHERE,
  [anon_sym_where] = anon_sym_where,
  [anon_sym_AND] = anon_sym_AND,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_OR] = anon_sym_OR,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LT_GT] = anon_sym_LT_GT,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_NOT] = anon_sym_NOT,
  [anon_sym_not] = anon_sym_not,
  [anon_sym_IN] = anon_sym_IN,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_IS] = anon_sym_IS,
  [anon_sym_is] = anon_sym_is,
  [anon_sym_BETWEEN] = anon_sym_BETWEEN,
  [anon_sym_between] = anon_sym_between,
  [anon_sym_LIMIT] = anon_sym_LIMIT,
  [anon_sym_limit] = anon_sym_limit,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_AS] = anon_sym_AS,
  [anon_sym_as] = anon_sym_as,
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym__identifier] = sym__identifier,
  [sym__number] = sym__number,
  [sym__string] = sym__string,
  [anon_sym_TRUE] = anon_sym_TRUE,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_FALSE] = anon_sym_FALSE,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_NULL] = anon_sym_NULL,
  [anon_sym_null] = anon_sym_null,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_select_statement] = sym_select_statement,
  [sym_select_fields] = sym_select_fields,
  [sym__select_field] = sym__select_field,
  [sym_from_clause] = sym_from_clause,
  [sym_join_clause] = sym_join_clause,
  [sym_where_clause] = sym_where_clause,
  [sym_conditions] = sym_conditions,
  [sym_condition] = sym_condition,
  [sym_limit_clause] = sym_limit_clause,
  [sym_field_expression] = sym_field_expression,
  [sym_symbole_definition] = sym_symbole_definition,
  [sym__aliase] = sym__aliase,
  [sym__field_expression] = sym__field_expression,
  [sym__value] = sym__value,
  [sym__boolean] = sym__boolean,
  [sym__null] = sym__null,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SELECT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_select] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TOP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_top] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FROM] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_from] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_INNER] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_inner] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LEFT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_left] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RIGHT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_right] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_JOIN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_join] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_on] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_WHERE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_where] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_not] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_IN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_IS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_is] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BETWEEN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_between] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LIMIT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_limit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_as] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym__identifier] = {
    .visible = false,
    .named = true,
  },
  [sym__number] = {
    .visible = false,
    .named = true,
  },
  [sym__string] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_TRUE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FALSE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NULL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_null] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym_select_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_select_fields] = {
    .visible = true,
    .named = true,
  },
  [sym__select_field] = {
    .visible = false,
    .named = true,
  },
  [sym_from_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_join_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_where_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_conditions] = {
    .visible = true,
    .named = true,
  },
  [sym_condition] = {
    .visible = true,
    .named = true,
  },
  [sym_limit_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_field_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_symbole_definition] = {
    .visible = true,
    .named = true,
  },
  [sym__aliase] = {
    .visible = false,
    .named = true,
  },
  [sym__field_expression] = {
    .visible = false,
    .named = true,
  },
  [sym__value] = {
    .visible = false,
    .named = true,
  },
  [sym__boolean] = {
    .visible = false,
    .named = true,
  },
  [sym__null] = {
    .visible = false,
    .named = true,
  },
};

static TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(115);
      if (lookahead == '\'') ADVANCE(2);
      if (lookahead == '(') ADVANCE(129);
      if (lookahead == ')') ADVANCE(130);
      if (lookahead == '*') ADVANCE(124);
      if (lookahead == ',') ADVANCE(123);
      if (lookahead == '.') ADVANCE(177);
      if (lookahead == ';') ADVANCE(116);
      if (lookahead == '<') ADVANCE(159);
      if (lookahead == '=') ADVANCE(157);
      if (lookahead == '>') ADVANCE(161);
      if (lookahead == 'A') ADVANCE(33);
      if (lookahead == 'B') ADVANCE(9);
      if (lookahead == 'F') ADVANCE(6);
      if (lookahead == 'I') ADVANCE(34);
      if (lookahead == 'J') ADVANCE(41);
      if (lookahead == 'L') ADVANCE(10);
      if (lookahead == 'N') ADVANCE(43);
      if (lookahead == 'O') ADVANCE(36);
      if (lookahead == 'R') ADVANCE(24);
      if (lookahead == 'S') ADVANCE(18);
      if (lookahead == 'T') ADVANCE(40);
      if (lookahead == 'W') ADVANCE(22);
      if (lookahead == '[') ADVANCE(183);
      if (lookahead == ']') ADVANCE(184);
      if (lookahead == '`') ADVANCE(182);
      if (lookahead == 'a') ADVANCE(85);
      if (lookahead == 'b') ADVANCE(61);
      if (lookahead == 'f') ADVANCE(58);
      if (lookahead == 'i') ADVANCE(86);
      if (lookahead == 'j') ADVANCE(93);
      if (lookahead == 'l') ADVANCE(62);
      if (lookahead == 'n') ADVANCE(95);
      if (lookahead == 'o') ADVANCE(88);
      if (lookahead == 'r') ADVANCE(76);
      if (lookahead == 's') ADVANCE(70);
      if (lookahead == 't') ADVANCE(92);
      if (lookahead == 'w') ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(256);
      END_STATE();
    case 1:
      if (lookahead == '\'') ADVANCE(2);
      if (lookahead == 'F') ADVANCE(185);
      if (lookahead == 'T') ADVANCE(211);
      if (lookahead == 'f') ADVANCE(220);
      if (lookahead == 't') ADVANCE(246);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(256);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 2:
      if (lookahead == '\'') ADVANCE(257);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '(') ADVANCE(129);
      if (lookahead == '*') ADVANCE(124);
      if (lookahead == '[') ADVANCE(183);
      if (lookahead == '`') ADVANCE(182);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(124);
      if (lookahead == 'T') ADVANCE(206);
      if (lookahead == '[') ADVANCE(183);
      if (lookahead == '`') ADVANCE(182);
      if (lookahead == 't') ADVANCE(241);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 5:
      if (lookahead == '.') ADVANCE(177);
      if (lookahead == '<') ADVANCE(159);
      if (lookahead == '=') ADVANCE(157);
      if (lookahead == '>') ADVANCE(161);
      if (lookahead == 'A') ADVANCE(48);
      if (lookahead == 'B') ADVANCE(9);
      if (lookahead == 'I') ADVANCE(39);
      if (lookahead == 'N') ADVANCE(42);
      if (lookahead == 'O') ADVANCE(35);
      if (lookahead == 'a') ADVANCE(100);
      if (lookahead == 'b') ADVANCE(61);
      if (lookahead == 'i') ADVANCE(91);
      if (lookahead == 'n') ADVANCE(94);
      if (lookahead == 'o') ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == 'A') ADVANCE(27);
      if (lookahead == 'R') ADVANCE(44);
      END_STATE();
    case 7:
      if (lookahead == 'C') ADVANCE(55);
      END_STATE();
    case 8:
      if (lookahead == 'D') ADVANCE(153);
      END_STATE();
    case 9:
      if (lookahead == 'E') ADVANCE(50);
      END_STATE();
    case 10:
      if (lookahead == 'E') ADVANCE(20);
      if (lookahead == 'I') ADVANCE(32);
      END_STATE();
    case 11:
      if (lookahead == 'E') ADVANCE(47);
      END_STATE();
    case 12:
      if (lookahead == 'E') ADVANCE(7);
      END_STATE();
    case 13:
      if (lookahead == 'E') ADVANCE(258);
      END_STATE();
    case 14:
      if (lookahead == 'E') ADVANCE(262);
      END_STATE();
    case 15:
      if (lookahead == 'E') ADVANCE(149);
      END_STATE();
    case 16:
      if (lookahead == 'E') ADVANCE(38);
      END_STATE();
    case 17:
      if (lookahead == 'E') ADVANCE(46);
      END_STATE();
    case 18:
      if (lookahead == 'E') ADVANCE(30);
      END_STATE();
    case 19:
      if (lookahead == 'E') ADVANCE(16);
      END_STATE();
    case 20:
      if (lookahead == 'F') ADVANCE(52);
      END_STATE();
    case 21:
      if (lookahead == 'G') ADVANCE(23);
      END_STATE();
    case 22:
      if (lookahead == 'H') ADVANCE(11);
      END_STATE();
    case 23:
      if (lookahead == 'H') ADVANCE(54);
      END_STATE();
    case 24:
      if (lookahead == 'I') ADVANCE(21);
      END_STATE();
    case 25:
      if (lookahead == 'I') ADVANCE(37);
      END_STATE();
    case 26:
      if (lookahead == 'I') ADVANCE(53);
      END_STATE();
    case 27:
      if (lookahead == 'L') ADVANCE(49);
      END_STATE();
    case 28:
      if (lookahead == 'L') ADVANCE(266);
      END_STATE();
    case 29:
      if (lookahead == 'L') ADVANCE(28);
      END_STATE();
    case 30:
      if (lookahead == 'L') ADVANCE(12);
      END_STATE();
    case 31:
      if (lookahead == 'M') ADVANCE(125);
      END_STATE();
    case 32:
      if (lookahead == 'M') ADVANCE(26);
      END_STATE();
    case 33:
      if (lookahead == 'N') ADVANCE(8);
      if (lookahead == 'S') ADVANCE(178);
      END_STATE();
    case 34:
      if (lookahead == 'N') ADVANCE(166);
      if (lookahead == 'S') ADVANCE(169);
      END_STATE();
    case 35:
      if (lookahead == 'N') ADVANCE(147);
      END_STATE();
    case 36:
      if (lookahead == 'N') ADVANCE(147);
      if (lookahead == 'R') ADVANCE(155);
      END_STATE();
    case 37:
      if (lookahead == 'N') ADVANCE(143);
      END_STATE();
    case 38:
      if (lookahead == 'N') ADVANCE(171);
      END_STATE();
    case 39:
      if (lookahead == 'N') ADVANCE(165);
      if (lookahead == 'S') ADVANCE(169);
      END_STATE();
    case 40:
      if (lookahead == 'O') ADVANCE(45);
      if (lookahead == 'R') ADVANCE(56);
      END_STATE();
    case 41:
      if (lookahead == 'O') ADVANCE(25);
      END_STATE();
    case 42:
      if (lookahead == 'O') ADVANCE(51);
      END_STATE();
    case 43:
      if (lookahead == 'O') ADVANCE(51);
      if (lookahead == 'U') ADVANCE(29);
      END_STATE();
    case 44:
      if (lookahead == 'O') ADVANCE(31);
      END_STATE();
    case 45:
      if (lookahead == 'P') ADVANCE(119);
      END_STATE();
    case 46:
      if (lookahead == 'R') ADVANCE(131);
      END_STATE();
    case 47:
      if (lookahead == 'R') ADVANCE(15);
      END_STATE();
    case 48:
      if (lookahead == 'S') ADVANCE(178);
      END_STATE();
    case 49:
      if (lookahead == 'S') ADVANCE(14);
      END_STATE();
    case 50:
      if (lookahead == 'T') ADVANCE(57);
      END_STATE();
    case 51:
      if (lookahead == 'T') ADVANCE(163);
      END_STATE();
    case 52:
      if (lookahead == 'T') ADVANCE(135);
      END_STATE();
    case 53:
      if (lookahead == 'T') ADVANCE(173);
      END_STATE();
    case 54:
      if (lookahead == 'T') ADVANCE(139);
      END_STATE();
    case 55:
      if (lookahead == 'T') ADVANCE(117);
      END_STATE();
    case 56:
      if (lookahead == 'U') ADVANCE(13);
      END_STATE();
    case 57:
      if (lookahead == 'W') ADVANCE(19);
      END_STATE();
    case 58:
      if (lookahead == 'a') ADVANCE(79);
      if (lookahead == 'r') ADVANCE(96);
      END_STATE();
    case 59:
      if (lookahead == 'c') ADVANCE(107);
      END_STATE();
    case 60:
      if (lookahead == 'd') ADVANCE(154);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(72);
      if (lookahead == 'i') ADVANCE(84);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(99);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(260);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(264);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(151);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(90);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(98);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 72:
      if (lookahead == 'f') ADVANCE(104);
      END_STATE();
    case 73:
      if (lookahead == 'g') ADVANCE(75);
      END_STATE();
    case 74:
      if (lookahead == 'h') ADVANCE(63);
      END_STATE();
    case 75:
      if (lookahead == 'h') ADVANCE(106);
      END_STATE();
    case 76:
      if (lookahead == 'i') ADVANCE(73);
      END_STATE();
    case 77:
      if (lookahead == 'i') ADVANCE(89);
      END_STATE();
    case 78:
      if (lookahead == 'i') ADVANCE(105);
      END_STATE();
    case 79:
      if (lookahead == 'l') ADVANCE(101);
      END_STATE();
    case 80:
      if (lookahead == 'l') ADVANCE(267);
      END_STATE();
    case 81:
      if (lookahead == 'l') ADVANCE(80);
      END_STATE();
    case 82:
      if (lookahead == 'l') ADVANCE(64);
      END_STATE();
    case 83:
      if (lookahead == 'm') ADVANCE(127);
      END_STATE();
    case 84:
      if (lookahead == 'm') ADVANCE(78);
      END_STATE();
    case 85:
      if (lookahead == 'n') ADVANCE(60);
      if (lookahead == 's') ADVANCE(180);
      END_STATE();
    case 86:
      if (lookahead == 'n') ADVANCE(168);
      if (lookahead == 's') ADVANCE(170);
      END_STATE();
    case 87:
      if (lookahead == 'n') ADVANCE(148);
      END_STATE();
    case 88:
      if (lookahead == 'n') ADVANCE(148);
      if (lookahead == 'r') ADVANCE(156);
      END_STATE();
    case 89:
      if (lookahead == 'n') ADVANCE(145);
      END_STATE();
    case 90:
      if (lookahead == 'n') ADVANCE(172);
      END_STATE();
    case 91:
      if (lookahead == 'n') ADVANCE(167);
      if (lookahead == 's') ADVANCE(170);
      END_STATE();
    case 92:
      if (lookahead == 'o') ADVANCE(97);
      if (lookahead == 'r') ADVANCE(108);
      END_STATE();
    case 93:
      if (lookahead == 'o') ADVANCE(77);
      END_STATE();
    case 94:
      if (lookahead == 'o') ADVANCE(103);
      END_STATE();
    case 95:
      if (lookahead == 'o') ADVANCE(103);
      if (lookahead == 'u') ADVANCE(81);
      END_STATE();
    case 96:
      if (lookahead == 'o') ADVANCE(83);
      END_STATE();
    case 97:
      if (lookahead == 'p') ADVANCE(121);
      END_STATE();
    case 98:
      if (lookahead == 'r') ADVANCE(133);
      END_STATE();
    case 99:
      if (lookahead == 'r') ADVANCE(67);
      END_STATE();
    case 100:
      if (lookahead == 's') ADVANCE(180);
      END_STATE();
    case 101:
      if (lookahead == 's') ADVANCE(66);
      END_STATE();
    case 102:
      if (lookahead == 't') ADVANCE(109);
      END_STATE();
    case 103:
      if (lookahead == 't') ADVANCE(164);
      END_STATE();
    case 104:
      if (lookahead == 't') ADVANCE(137);
      END_STATE();
    case 105:
      if (lookahead == 't') ADVANCE(175);
      END_STATE();
    case 106:
      if (lookahead == 't') ADVANCE(141);
      END_STATE();
    case 107:
      if (lookahead == 't') ADVANCE(118);
      END_STATE();
    case 108:
      if (lookahead == 'u') ADVANCE(65);
      END_STATE();
    case 109:
      if (lookahead == 'w') ADVANCE(71);
      END_STATE();
    case 110:
      if (eof) ADVANCE(115);
      if (lookahead == ')') ADVANCE(130);
      if (lookahead == ',') ADVANCE(123);
      if (lookahead == '.') ADVANCE(177);
      if (lookahead == ';') ADVANCE(116);
      if (lookahead == 'A') ADVANCE(214);
      if (lookahead == 'F') ADVANCE(212);
      if (lookahead == 'L') ADVANCE(196);
      if (lookahead == 'W') ADVANCE(194);
      if (lookahead == '[') ADVANCE(183);
      if (lookahead == '`') ADVANCE(182);
      if (lookahead == 'a') ADVANCE(249);
      if (lookahead == 'f') ADVANCE(247);
      if (lookahead == 'l') ADVANCE(231);
      if (lookahead == 'w') ADVANCE(229);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(110)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 111:
      if (eof) ADVANCE(115);
      if (lookahead == ')') ADVANCE(130);
      if (lookahead == ',') ADVANCE(123);
      if (lookahead == ';') ADVANCE(116);
      if (lookahead == 'F') ADVANCE(212);
      if (lookahead == 'L') ADVANCE(196);
      if (lookahead == 'W') ADVANCE(194);
      if (lookahead == '[') ADVANCE(183);
      if (lookahead == '`') ADVANCE(182);
      if (lookahead == 'f') ADVANCE(247);
      if (lookahead == 'l') ADVANCE(231);
      if (lookahead == 'w') ADVANCE(229);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(111)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 112:
      if (eof) ADVANCE(115);
      if (lookahead == ')') ADVANCE(130);
      if (lookahead == '.') ADVANCE(177);
      if (lookahead == ';') ADVANCE(116);
      if (lookahead == 'A') ADVANCE(214);
      if (lookahead == 'I') ADVANCE(204);
      if (lookahead == 'J') ADVANCE(207);
      if (lookahead == 'L') ADVANCE(186);
      if (lookahead == 'R') ADVANCE(197);
      if (lookahead == 'W') ADVANCE(194);
      if (lookahead == '[') ADVANCE(183);
      if (lookahead == '`') ADVANCE(182);
      if (lookahead == 'a') ADVANCE(249);
      if (lookahead == 'i') ADVANCE(239);
      if (lookahead == 'j') ADVANCE(242);
      if (lookahead == 'l') ADVANCE(221);
      if (lookahead == 'r') ADVANCE(232);
      if (lookahead == 'w') ADVANCE(229);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(112)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 113:
      if (eof) ADVANCE(115);
      if (lookahead == ')') ADVANCE(130);
      if (lookahead == ';') ADVANCE(116);
      if (lookahead == 'I') ADVANCE(204);
      if (lookahead == 'J') ADVANCE(207);
      if (lookahead == 'L') ADVANCE(186);
      if (lookahead == 'R') ADVANCE(197);
      if (lookahead == 'W') ADVANCE(194);
      if (lookahead == '[') ADVANCE(183);
      if (lookahead == '`') ADVANCE(182);
      if (lookahead == 'i') ADVANCE(239);
      if (lookahead == 'j') ADVANCE(242);
      if (lookahead == 'l') ADVANCE(221);
      if (lookahead == 'r') ADVANCE(232);
      if (lookahead == 'w') ADVANCE(229);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(113)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 114:
      if (eof) ADVANCE(115);
      if (lookahead == ')') ADVANCE(130);
      if (lookahead == ';') ADVANCE(116);
      if (lookahead == 'L') ADVANCE(196);
      if (lookahead == 'W') ADVANCE(194);
      if (lookahead == '[') ADVANCE(183);
      if (lookahead == '`') ADVANCE(182);
      if (lookahead == 'l') ADVANCE(231);
      if (lookahead == 'w') ADVANCE(229);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(114)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_SELECT);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_select);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_TOP);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_TOP);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_top);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_top);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_FROM);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_FROM);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_from);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_INNER);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_INNER);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_inner);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_inner);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_LEFT);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_LEFT);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_left);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_left);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_RIGHT);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_RIGHT);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_right);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_right);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_JOIN);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_JOIN);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_join);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_join);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_ON);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_on);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_WHERE);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_WHERE);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_where);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_where);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_AND);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_OR);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(160);
      if (lookahead == '>') ADVANCE(158);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(162);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_NOT);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_IN);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_IN);
      if (lookahead == 'N') ADVANCE(17);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == 'n') ADVANCE(69);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_IS);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_is);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_BETWEEN);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_between);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_LIMIT);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_LIMIT);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_limit);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_limit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_AS);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_AS);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_as);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'A') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(192);
      if (lookahead == 'I') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'E') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'F') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'G') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'H') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'H') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'I') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'L') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'M') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'M') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'N') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'O') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'P') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'R') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'S') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'T') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'U') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(227);
      if (lookahead == 'i') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'f') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'h') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'h') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym__identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym__number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(256);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym__string);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_TRUE);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_TRUE);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_FALSE);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_FALSE);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_NULL);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 112},
  [3] = {.lex_state = 112},
  [4] = {.lex_state = 112},
  [5] = {.lex_state = 112},
  [6] = {.lex_state = 113},
  [7] = {.lex_state = 5},
  [8] = {.lex_state = 5},
  [9] = {.lex_state = 111},
  [10] = {.lex_state = 111},
  [11] = {.lex_state = 113},
  [12] = {.lex_state = 5},
  [13] = {.lex_state = 113},
  [14] = {.lex_state = 113},
  [15] = {.lex_state = 114},
  [16] = {.lex_state = 110},
  [17] = {.lex_state = 110},
  [18] = {.lex_state = 114},
  [19] = {.lex_state = 110},
  [20] = {.lex_state = 110},
  [21] = {.lex_state = 5},
  [22] = {.lex_state = 5},
  [23] = {.lex_state = 111},
  [24] = {.lex_state = 111},
  [25] = {.lex_state = 111},
  [26] = {.lex_state = 111},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 114},
  [29] = {.lex_state = 114},
  [30] = {.lex_state = 114},
  [31] = {.lex_state = 114},
  [32] = {.lex_state = 114},
  [33] = {.lex_state = 114},
  [34] = {.lex_state = 114},
  [35] = {.lex_state = 114},
  [36] = {.lex_state = 114},
  [37] = {.lex_state = 114},
  [38] = {.lex_state = 114},
  [39] = {.lex_state = 114},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 3},
  [64] = {.lex_state = 3},
  [65] = {.lex_state = 3},
  [66] = {.lex_state = 3},
  [67] = {.lex_state = 3},
  [68] = {.lex_state = 3},
  [69] = {.lex_state = 3},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 3},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 3},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 3},
  [80] = {.lex_state = 3},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 3},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 5},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 5},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 3},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 3},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 3},
  [128] = {.lex_state = 3},
  [129] = {.lex_state = 3},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 3},
  [133] = {.lex_state = 3},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 3},
  [137] = {.lex_state = 3},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_SELECT] = ACTIONS(1),
    [anon_sym_select] = ACTIONS(1),
    [anon_sym_TOP] = ACTIONS(1),
    [anon_sym_top] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_FROM] = ACTIONS(1),
    [anon_sym_from] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_INNER] = ACTIONS(1),
    [anon_sym_inner] = ACTIONS(1),
    [anon_sym_LEFT] = ACTIONS(1),
    [anon_sym_left] = ACTIONS(1),
    [anon_sym_RIGHT] = ACTIONS(1),
    [anon_sym_right] = ACTIONS(1),
    [anon_sym_JOIN] = ACTIONS(1),
    [anon_sym_join] = ACTIONS(1),
    [anon_sym_ON] = ACTIONS(1),
    [anon_sym_on] = ACTIONS(1),
    [anon_sym_WHERE] = ACTIONS(1),
    [anon_sym_where] = ACTIONS(1),
    [anon_sym_AND] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_OR] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LT_GT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_NOT] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [anon_sym_IN] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_IS] = ACTIONS(1),
    [anon_sym_is] = ACTIONS(1),
    [anon_sym_BETWEEN] = ACTIONS(1),
    [anon_sym_between] = ACTIONS(1),
    [anon_sym_LIMIT] = ACTIONS(1),
    [anon_sym_limit] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_AS] = ACTIONS(1),
    [anon_sym_as] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym__number] = ACTIONS(1),
    [sym__string] = ACTIONS(1),
    [anon_sym_TRUE] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_FALSE] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_NULL] = ACTIONS(1),
    [anon_sym_null] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(131),
    [sym__definition] = STATE(100),
    [sym_select_statement] = STATE(100),
    [anon_sym_SELECT] = ACTIONS(3),
    [anon_sym_select] = ACTIONS(3),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(9), 1,
      anon_sym_DOT,
    ACTIONS(5), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
    ACTIONS(7), 15,
      anon_sym_INNER,
      anon_sym_inner,
      anon_sym_LEFT,
      anon_sym_left,
      anon_sym_RIGHT,
      anon_sym_right,
      anon_sym_JOIN,
      anon_sym_join,
      anon_sym_WHERE,
      anon_sym_where,
      anon_sym_LIMIT,
      anon_sym_limit,
      anon_sym_AS,
      anon_sym_as,
      sym__identifier,
  [28] = 4,
    STATE(13), 1,
      sym__aliase,
    ACTIONS(15), 2,
      anon_sym_AS,
      anon_sym_as,
    ACTIONS(11), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
    ACTIONS(13), 13,
      anon_sym_INNER,
      anon_sym_inner,
      anon_sym_LEFT,
      anon_sym_left,
      anon_sym_RIGHT,
      anon_sym_right,
      anon_sym_JOIN,
      anon_sym_join,
      anon_sym_WHERE,
      anon_sym_where,
      anon_sym_LIMIT,
      anon_sym_limit,
      sym__identifier,
  [58] = 2,
    ACTIONS(17), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
    ACTIONS(19), 15,
      anon_sym_INNER,
      anon_sym_inner,
      anon_sym_LEFT,
      anon_sym_left,
      anon_sym_RIGHT,
      anon_sym_right,
      anon_sym_JOIN,
      anon_sym_join,
      anon_sym_WHERE,
      anon_sym_where,
      anon_sym_LIMIT,
      anon_sym_limit,
      anon_sym_AS,
      anon_sym_as,
      sym__identifier,
  [84] = 2,
    ACTIONS(21), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
    ACTIONS(23), 15,
      anon_sym_INNER,
      anon_sym_inner,
      anon_sym_LEFT,
      anon_sym_left,
      anon_sym_RIGHT,
      anon_sym_right,
      anon_sym_JOIN,
      anon_sym_join,
      anon_sym_WHERE,
      anon_sym_where,
      anon_sym_LIMIT,
      anon_sym_limit,
      anon_sym_AS,
      anon_sym_as,
      sym__identifier,
  [109] = 5,
    STATE(31), 1,
      sym_join_clause,
    ACTIONS(29), 2,
      anon_sym_JOIN,
      anon_sym_join,
    ACTIONS(25), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
    ACTIONS(31), 5,
      anon_sym_WHERE,
      anon_sym_where,
      anon_sym_LIMIT,
      anon_sym_limit,
      sym__identifier,
    ACTIONS(27), 6,
      anon_sym_INNER,
      anon_sym_inner,
      anon_sym_LEFT,
      anon_sym_left,
      anon_sym_RIGHT,
      anon_sym_right,
  [139] = 3,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(7), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(5), 16,
      anon_sym_ON,
      anon_sym_on,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_NOT,
      anon_sym_not,
      anon_sym_IN,
      anon_sym_in,
      anon_sym_IS,
      anon_sym_is,
      anon_sym_BETWEEN,
      anon_sym_between,
      anon_sym_AS,
      anon_sym_as,
  [165] = 2,
    ACTIONS(19), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(17), 17,
      anon_sym_ON,
      anon_sym_on,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_NOT,
      anon_sym_not,
      anon_sym_IN,
      anon_sym_in,
      anon_sym_IS,
      anon_sym_is,
      anon_sym_BETWEEN,
      anon_sym_between,
      anon_sym_DOT,
      anon_sym_AS,
      anon_sym_as,
  [189] = 14,
    ACTIONS(43), 1,
      anon_sym_BQUOTE,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(47), 1,
      sym__identifier,
    STATE(7), 1,
      sym__field_expression,
    STATE(15), 1,
      sym_from_clause,
    STATE(22), 1,
      sym_field_expression,
    STATE(55), 1,
      sym_condition,
    STATE(72), 1,
      sym_where_clause,
    STATE(76), 1,
      sym_conditions,
    STATE(95), 1,
      sym_limit_clause,
    ACTIONS(37), 2,
      anon_sym_FROM,
      anon_sym_from,
    ACTIONS(39), 2,
      anon_sym_WHERE,
      anon_sym_where,
    ACTIONS(41), 2,
      anon_sym_LIMIT,
      anon_sym_limit,
    ACTIONS(35), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [237] = 14,
    ACTIONS(43), 1,
      anon_sym_BQUOTE,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(47), 1,
      sym__identifier,
    STATE(7), 1,
      sym__field_expression,
    STATE(18), 1,
      sym_from_clause,
    STATE(22), 1,
      sym_field_expression,
    STATE(55), 1,
      sym_condition,
    STATE(75), 1,
      sym_where_clause,
    STATE(76), 1,
      sym_conditions,
    STATE(90), 1,
      sym_limit_clause,
    ACTIONS(37), 2,
      anon_sym_FROM,
      anon_sym_from,
    ACTIONS(39), 2,
      anon_sym_WHERE,
      anon_sym_where,
    ACTIONS(41), 2,
      anon_sym_LIMIT,
      anon_sym_limit,
    ACTIONS(49), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [285] = 5,
    STATE(36), 1,
      sym_join_clause,
    ACTIONS(29), 2,
      anon_sym_JOIN,
      anon_sym_join,
    ACTIONS(51), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
    ACTIONS(53), 5,
      anon_sym_WHERE,
      anon_sym_where,
      anon_sym_LIMIT,
      anon_sym_limit,
      sym__identifier,
    ACTIONS(27), 6,
      anon_sym_INNER,
      anon_sym_inner,
      anon_sym_LEFT,
      anon_sym_left,
      anon_sym_RIGHT,
      anon_sym_right,
  [315] = 2,
    ACTIONS(23), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(21), 16,
      anon_sym_ON,
      anon_sym_on,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_NOT,
      anon_sym_not,
      anon_sym_IN,
      anon_sym_in,
      anon_sym_IS,
      anon_sym_is,
      anon_sym_BETWEEN,
      anon_sym_between,
      anon_sym_AS,
      anon_sym_as,
  [338] = 2,
    ACTIONS(55), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
    ACTIONS(57), 13,
      anon_sym_INNER,
      anon_sym_inner,
      anon_sym_LEFT,
      anon_sym_left,
      anon_sym_RIGHT,
      anon_sym_right,
      anon_sym_JOIN,
      anon_sym_join,
      anon_sym_WHERE,
      anon_sym_where,
      anon_sym_LIMIT,
      anon_sym_limit,
      sym__identifier,
  [361] = 2,
    ACTIONS(59), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
    ACTIONS(61), 13,
      anon_sym_INNER,
      anon_sym_inner,
      anon_sym_LEFT,
      anon_sym_left,
      anon_sym_RIGHT,
      anon_sym_right,
      anon_sym_JOIN,
      anon_sym_join,
      anon_sym_WHERE,
      anon_sym_where,
      anon_sym_LIMIT,
      anon_sym_limit,
      sym__identifier,
  [384] = 12,
    ACTIONS(43), 1,
      anon_sym_BQUOTE,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(47), 1,
      sym__identifier,
    STATE(7), 1,
      sym__field_expression,
    STATE(22), 1,
      sym_field_expression,
    STATE(55), 1,
      sym_condition,
    STATE(74), 1,
      sym_where_clause,
    STATE(76), 1,
      sym_conditions,
    STATE(88), 1,
      sym_limit_clause,
    ACTIONS(39), 2,
      anon_sym_WHERE,
      anon_sym_where,
    ACTIONS(41), 2,
      anon_sym_LIMIT,
      anon_sym_limit,
    ACTIONS(63), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [425] = 4,
    STATE(23), 1,
      sym__aliase,
    ACTIONS(65), 2,
      anon_sym_AS,
      anon_sym_as,
    ACTIONS(11), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
    ACTIONS(13), 7,
      anon_sym_FROM,
      anon_sym_from,
      anon_sym_WHERE,
      anon_sym_where,
      anon_sym_LIMIT,
      anon_sym_limit,
      sym__identifier,
  [450] = 3,
    ACTIONS(67), 1,
      anon_sym_DOT,
    ACTIONS(5), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
    ACTIONS(7), 9,
      anon_sym_FROM,
      anon_sym_from,
      anon_sym_WHERE,
      anon_sym_where,
      anon_sym_LIMIT,
      anon_sym_limit,
      anon_sym_AS,
      anon_sym_as,
      sym__identifier,
  [473] = 12,
    ACTIONS(43), 1,
      anon_sym_BQUOTE,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(47), 1,
      sym__identifier,
    STATE(7), 1,
      sym__field_expression,
    STATE(22), 1,
      sym_field_expression,
    STATE(55), 1,
      sym_condition,
    STATE(70), 1,
      sym_where_clause,
    STATE(76), 1,
      sym_conditions,
    STATE(94), 1,
      sym_limit_clause,
    ACTIONS(39), 2,
      anon_sym_WHERE,
      anon_sym_where,
    ACTIONS(41), 2,
      anon_sym_LIMIT,
      anon_sym_limit,
    ACTIONS(69), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [514] = 2,
    ACTIONS(17), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
    ACTIONS(19), 9,
      anon_sym_FROM,
      anon_sym_from,
      anon_sym_WHERE,
      anon_sym_where,
      anon_sym_LIMIT,
      anon_sym_limit,
      anon_sym_AS,
      anon_sym_as,
      sym__identifier,
  [535] = 2,
    ACTIONS(21), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
    ACTIONS(23), 9,
      anon_sym_FROM,
      anon_sym_from,
      anon_sym_WHERE,
      anon_sym_where,
      anon_sym_LIMIT,
      anon_sym_limit,
      anon_sym_AS,
      anon_sym_as,
      sym__identifier,
  [555] = 6,
    ACTIONS(73), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(75), 2,
      anon_sym_NOT,
      anon_sym_not,
    ACTIONS(77), 2,
      anon_sym_IN,
      anon_sym_in,
    ACTIONS(79), 2,
      anon_sym_IS,
      anon_sym_is,
    ACTIONS(81), 2,
      anon_sym_BETWEEN,
      anon_sym_between,
    ACTIONS(71), 4,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [582] = 6,
    ACTIONS(85), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(87), 2,
      anon_sym_NOT,
      anon_sym_not,
    ACTIONS(89), 2,
      anon_sym_IN,
      anon_sym_in,
    ACTIONS(91), 2,
      anon_sym_IS,
      anon_sym_is,
    ACTIONS(93), 2,
      anon_sym_BETWEEN,
      anon_sym_between,
    ACTIONS(83), 4,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [609] = 2,
    ACTIONS(55), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
    ACTIONS(57), 7,
      anon_sym_FROM,
      anon_sym_from,
      anon_sym_WHERE,
      anon_sym_where,
      anon_sym_LIMIT,
      anon_sym_limit,
      sym__identifier,
  [627] = 3,
    ACTIONS(97), 1,
      anon_sym_COMMA,
    ACTIONS(95), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
    ACTIONS(99), 7,
      anon_sym_FROM,
      anon_sym_from,
      anon_sym_WHERE,
      anon_sym_where,
      anon_sym_LIMIT,
      anon_sym_limit,
      sym__identifier,
  [647] = 2,
    ACTIONS(59), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
    ACTIONS(61), 7,
      anon_sym_FROM,
      anon_sym_from,
      anon_sym_WHERE,
      anon_sym_where,
      anon_sym_LIMIT,
      anon_sym_limit,
      sym__identifier,
  [665] = 2,
    ACTIONS(101), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
    ACTIONS(103), 7,
      anon_sym_FROM,
      anon_sym_from,
      anon_sym_WHERE,
      anon_sym_where,
      anon_sym_LIMIT,
      anon_sym_limit,
      sym__identifier,
  [682] = 9,
    ACTIONS(107), 1,
      anon_sym_STAR,
    ACTIONS(109), 1,
      anon_sym_BQUOTE,
    ACTIONS(111), 1,
      anon_sym_LBRACK,
    ACTIONS(113), 1,
      sym__identifier,
    STATE(10), 1,
      sym_select_fields,
    STATE(16), 1,
      sym_field_expression,
    STATE(17), 1,
      sym__field_expression,
    ACTIONS(105), 2,
      anon_sym_TOP,
      anon_sym_top,
    STATE(24), 2,
      sym__select_field,
      sym_symbole_definition,
  [712] = 2,
    ACTIONS(115), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
    ACTIONS(117), 5,
      anon_sym_WHERE,
      anon_sym_where,
      anon_sym_LIMIT,
      anon_sym_limit,
      sym__identifier,
  [727] = 2,
    ACTIONS(119), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
    ACTIONS(121), 5,
      anon_sym_WHERE,
      anon_sym_where,
      anon_sym_LIMIT,
      anon_sym_limit,
      sym__identifier,
  [742] = 2,
    ACTIONS(123), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
    ACTIONS(125), 5,
      anon_sym_WHERE,
      anon_sym_where,
      anon_sym_LIMIT,
      anon_sym_limit,
      sym__identifier,
  [757] = 2,
    ACTIONS(127), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
    ACTIONS(129), 5,
      anon_sym_WHERE,
      anon_sym_where,
      anon_sym_LIMIT,
      anon_sym_limit,
      sym__identifier,
  [772] = 2,
    ACTIONS(131), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
    ACTIONS(133), 5,
      anon_sym_WHERE,
      anon_sym_where,
      anon_sym_LIMIT,
      anon_sym_limit,
      sym__identifier,
  [787] = 2,
    ACTIONS(135), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
    ACTIONS(137), 5,
      anon_sym_WHERE,
      anon_sym_where,
      anon_sym_LIMIT,
      anon_sym_limit,
      sym__identifier,
  [802] = 2,
    ACTIONS(139), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
    ACTIONS(141), 5,
      anon_sym_WHERE,
      anon_sym_where,
      anon_sym_LIMIT,
      anon_sym_limit,
      sym__identifier,
  [817] = 2,
    ACTIONS(143), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
    ACTIONS(145), 5,
      anon_sym_WHERE,
      anon_sym_where,
      anon_sym_LIMIT,
      anon_sym_limit,
      sym__identifier,
  [832] = 2,
    ACTIONS(147), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
    ACTIONS(149), 5,
      anon_sym_WHERE,
      anon_sym_where,
      anon_sym_LIMIT,
      anon_sym_limit,
      sym__identifier,
  [847] = 2,
    ACTIONS(151), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
    ACTIONS(153), 5,
      anon_sym_WHERE,
      anon_sym_where,
      anon_sym_LIMIT,
      anon_sym_limit,
      sym__identifier,
  [862] = 2,
    ACTIONS(155), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
    ACTIONS(157), 5,
      anon_sym_WHERE,
      anon_sym_where,
      anon_sym_LIMIT,
      anon_sym_limit,
      sym__identifier,
  [877] = 2,
    ACTIONS(159), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
    ACTIONS(161), 5,
      anon_sym_WHERE,
      anon_sym_where,
      anon_sym_LIMIT,
      anon_sym_limit,
      sym__identifier,
  [892] = 1,
    ACTIONS(119), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_OR,
      anon_sym_or,
      anon_sym_LIMIT,
      anon_sym_limit,
  [904] = 3,
    ACTIONS(165), 2,
      sym__number,
      sym__string,
    STATE(54), 2,
      sym__value,
      sym__boolean,
    ACTIONS(163), 5,
      sym__identifier,
      anon_sym_TRUE,
      anon_sym_true,
      anon_sym_FALSE,
      anon_sym_false,
  [920] = 3,
    ACTIONS(169), 2,
      sym__number,
      sym__string,
    STATE(108), 2,
      sym__value,
      sym__boolean,
    ACTIONS(167), 5,
      sym__identifier,
      anon_sym_TRUE,
      anon_sym_true,
      anon_sym_FALSE,
      anon_sym_false,
  [936] = 3,
    ACTIONS(173), 2,
      sym__number,
      sym__string,
    STATE(110), 2,
      sym__value,
      sym__boolean,
    ACTIONS(171), 5,
      sym__identifier,
      anon_sym_TRUE,
      anon_sym_true,
      anon_sym_FALSE,
      anon_sym_false,
  [952] = 3,
    ACTIONS(177), 2,
      sym__number,
      sym__string,
    STATE(34), 2,
      sym__value,
      sym__boolean,
    ACTIONS(175), 5,
      sym__identifier,
      anon_sym_TRUE,
      anon_sym_true,
      anon_sym_FALSE,
      anon_sym_false,
  [968] = 8,
    ACTIONS(107), 1,
      anon_sym_STAR,
    ACTIONS(109), 1,
      anon_sym_BQUOTE,
    ACTIONS(111), 1,
      anon_sym_LBRACK,
    ACTIONS(179), 1,
      sym__identifier,
    STATE(9), 1,
      sym_select_fields,
    STATE(16), 1,
      sym_field_expression,
    STATE(17), 1,
      sym__field_expression,
    STATE(24), 2,
      sym__select_field,
      sym_symbole_definition,
  [994] = 3,
    ACTIONS(183), 2,
      sym__number,
      sym__string,
    STATE(96), 2,
      sym__value,
      sym__boolean,
    ACTIONS(181), 5,
      sym__identifier,
      anon_sym_TRUE,
      anon_sym_true,
      anon_sym_FALSE,
      anon_sym_false,
  [1010] = 3,
    ACTIONS(187), 2,
      sym__number,
      sym__string,
    STATE(126), 2,
      sym__value,
      sym__boolean,
    ACTIONS(185), 5,
      sym__identifier,
      anon_sym_TRUE,
      anon_sym_true,
      anon_sym_FALSE,
      anon_sym_false,
  [1026] = 3,
    ACTIONS(191), 2,
      sym__number,
      sym__string,
    STATE(30), 2,
      sym__value,
      sym__boolean,
    ACTIONS(189), 5,
      sym__identifier,
      anon_sym_TRUE,
      anon_sym_true,
      anon_sym_FALSE,
      anon_sym_false,
  [1042] = 3,
    ACTIONS(195), 2,
      sym__number,
      sym__string,
    STATE(103), 2,
      sym__value,
      sym__boolean,
    ACTIONS(193), 5,
      sym__identifier,
      anon_sym_TRUE,
      anon_sym_true,
      anon_sym_FALSE,
      anon_sym_false,
  [1058] = 8,
    ACTIONS(107), 1,
      anon_sym_STAR,
    ACTIONS(109), 1,
      anon_sym_BQUOTE,
    ACTIONS(111), 1,
      anon_sym_LBRACK,
    ACTIONS(179), 1,
      sym__identifier,
    STATE(16), 1,
      sym_field_expression,
    STATE(17), 1,
      sym__field_expression,
    STATE(26), 1,
      sym_select_fields,
    STATE(24), 2,
      sym__select_field,
      sym_symbole_definition,
  [1084] = 1,
    ACTIONS(135), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_OR,
      anon_sym_or,
      anon_sym_LIMIT,
      anon_sym_limit,
  [1096] = 3,
    ACTIONS(199), 2,
      sym__number,
      sym__string,
    STATE(60), 2,
      sym__value,
      sym__boolean,
    ACTIONS(197), 5,
      sym__identifier,
      anon_sym_TRUE,
      anon_sym_true,
      anon_sym_FALSE,
      anon_sym_false,
  [1112] = 1,
    ACTIONS(159), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_OR,
      anon_sym_or,
      anon_sym_LIMIT,
      anon_sym_limit,
  [1124] = 1,
    ACTIONS(139), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_OR,
      anon_sym_or,
      anon_sym_LIMIT,
      anon_sym_limit,
  [1136] = 2,
    ACTIONS(203), 4,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_OR,
      anon_sym_or,
    ACTIONS(201), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_LIMIT,
      anon_sym_limit,
  [1150] = 3,
    ACTIONS(207), 2,
      sym__number,
      sym__string,
    STATE(97), 2,
      sym__value,
      sym__boolean,
    ACTIONS(205), 5,
      sym__identifier,
      anon_sym_TRUE,
      anon_sym_true,
      anon_sym_FALSE,
      anon_sym_false,
  [1166] = 1,
    ACTIONS(115), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_OR,
      anon_sym_or,
      anon_sym_LIMIT,
      anon_sym_limit,
  [1178] = 3,
    ACTIONS(211), 2,
      sym__number,
      sym__string,
    STATE(113), 2,
      sym__value,
      sym__boolean,
    ACTIONS(209), 5,
      sym__identifier,
      anon_sym_TRUE,
      anon_sym_true,
      anon_sym_FALSE,
      anon_sym_false,
  [1194] = 3,
    ACTIONS(215), 2,
      sym__number,
      sym__string,
    STATE(105), 2,
      sym__value,
      sym__boolean,
    ACTIONS(213), 5,
      sym__identifier,
      anon_sym_TRUE,
      anon_sym_true,
      anon_sym_FALSE,
      anon_sym_false,
  [1210] = 1,
    ACTIONS(123), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_AND,
      anon_sym_and,
      anon_sym_OR,
      anon_sym_or,
      anon_sym_LIMIT,
      anon_sym_limit,
  [1222] = 3,
    ACTIONS(219), 2,
      sym__number,
      sym__string,
    STATE(104), 2,
      sym__value,
      sym__boolean,
    ACTIONS(217), 5,
      sym__identifier,
      anon_sym_TRUE,
      anon_sym_true,
      anon_sym_FALSE,
      anon_sym_false,
  [1238] = 3,
    ACTIONS(223), 2,
      sym__number,
      sym__string,
    STATE(140), 2,
      sym__value,
      sym__boolean,
    ACTIONS(221), 5,
      sym__identifier,
      anon_sym_TRUE,
      anon_sym_true,
      anon_sym_FALSE,
      anon_sym_false,
  [1254] = 8,
    ACTIONS(43), 1,
      anon_sym_BQUOTE,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(225), 1,
      anon_sym_LPAREN,
    ACTIONS(227), 1,
      sym__identifier,
    STATE(7), 1,
      sym__field_expression,
    STATE(22), 1,
      sym_field_expression,
    STATE(55), 1,
      sym_condition,
    STATE(84), 1,
      sym_conditions,
  [1279] = 7,
    ACTIONS(43), 1,
      anon_sym_BQUOTE,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(227), 1,
      sym__identifier,
    ACTIONS(229), 1,
      anon_sym_LPAREN,
    STATE(7), 1,
      sym__field_expression,
    STATE(21), 1,
      sym_field_expression,
    STATE(32), 1,
      sym_condition,
  [1301] = 7,
    ACTIONS(43), 1,
      anon_sym_BQUOTE,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(227), 1,
      sym__identifier,
    STATE(7), 1,
      sym__field_expression,
    STATE(22), 1,
      sym_field_expression,
    STATE(55), 1,
      sym_condition,
    STATE(112), 1,
      sym_conditions,
  [1323] = 7,
    ACTIONS(43), 1,
      anon_sym_BQUOTE,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(227), 1,
      sym__identifier,
    ACTIONS(231), 1,
      anon_sym_LPAREN,
    STATE(7), 1,
      sym__field_expression,
    STATE(21), 1,
      sym_field_expression,
    STATE(35), 1,
      sym_condition,
  [1345] = 7,
    ACTIONS(43), 1,
      anon_sym_BQUOTE,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(227), 1,
      sym__identifier,
    STATE(7), 1,
      sym__field_expression,
    STATE(22), 1,
      sym_field_expression,
    STATE(55), 1,
      sym_condition,
    STATE(124), 1,
      sym_conditions,
  [1367] = 7,
    ACTIONS(233), 1,
      anon_sym_LPAREN,
    ACTIONS(235), 1,
      anon_sym_BQUOTE,
    ACTIONS(237), 1,
      anon_sym_LBRACK,
    ACTIONS(239), 1,
      sym__identifier,
    STATE(2), 1,
      sym__field_expression,
    STATE(3), 1,
      sym_field_expression,
    STATE(11), 1,
      sym_symbole_definition,
  [1389] = 7,
    ACTIONS(43), 1,
      anon_sym_BQUOTE,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(227), 1,
      sym__identifier,
    STATE(7), 1,
      sym__field_expression,
    STATE(22), 1,
      sym_field_expression,
    STATE(55), 1,
      sym_condition,
    STATE(118), 1,
      sym_conditions,
  [1411] = 3,
    STATE(95), 1,
      sym_limit_clause,
    ACTIONS(241), 2,
      anon_sym_LIMIT,
      anon_sym_limit,
    ACTIONS(35), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [1424] = 6,
    ACTIONS(43), 1,
      anon_sym_BQUOTE,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(227), 1,
      sym__identifier,
    STATE(7), 1,
      sym__field_expression,
    STATE(81), 1,
      sym_field_expression,
    STATE(101), 1,
      sym_symbole_definition,
  [1443] = 3,
    STATE(88), 1,
      sym_limit_clause,
    ACTIONS(241), 2,
      anon_sym_LIMIT,
      anon_sym_limit,
    ACTIONS(63), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [1456] = 6,
    ACTIONS(43), 1,
      anon_sym_BQUOTE,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(227), 1,
      sym__identifier,
    STATE(7), 1,
      sym__field_expression,
    STATE(81), 1,
      sym_field_expression,
    STATE(106), 1,
      sym_symbole_definition,
  [1475] = 3,
    STATE(92), 1,
      sym_limit_clause,
    ACTIONS(241), 2,
      anon_sym_LIMIT,
      anon_sym_limit,
    ACTIONS(243), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [1488] = 3,
    STATE(94), 1,
      sym_limit_clause,
    ACTIONS(241), 2,
      anon_sym_LIMIT,
      anon_sym_limit,
    ACTIONS(69), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [1501] = 1,
    ACTIONS(245), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_LIMIT,
      anon_sym_limit,
  [1509] = 3,
    ACTIONS(247), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      anon_sym_SELECT,
      anon_sym_select,
    STATE(111), 2,
      sym__definition,
      sym_select_statement,
  [1521] = 3,
    STATE(34), 1,
      sym__null,
    ACTIONS(177), 2,
      anon_sym_NULL,
      anon_sym_null,
    ACTIONS(249), 2,
      anon_sym_NOT,
      anon_sym_not,
  [1533] = 5,
    ACTIONS(43), 1,
      anon_sym_BQUOTE,
    ACTIONS(45), 1,
      anon_sym_LBRACK,
    ACTIONS(227), 1,
      sym__identifier,
    STATE(7), 1,
      sym__field_expression,
    STATE(12), 1,
      sym_field_expression,
  [1549] = 5,
    ACTIONS(235), 1,
      anon_sym_BQUOTE,
    ACTIONS(237), 1,
      anon_sym_LBRACK,
    ACTIONS(239), 1,
      sym__identifier,
    STATE(2), 1,
      sym__field_expression,
    STATE(5), 1,
      sym_field_expression,
  [1565] = 3,
    STATE(109), 1,
      sym__aliase,
    ACTIONS(11), 2,
      anon_sym_ON,
      anon_sym_on,
    ACTIONS(251), 2,
      anon_sym_AS,
      anon_sym_as,
  [1577] = 5,
    ACTIONS(109), 1,
      anon_sym_BQUOTE,
    ACTIONS(111), 1,
      anon_sym_LBRACK,
    ACTIONS(179), 1,
      sym__identifier,
    STATE(17), 1,
      sym__field_expression,
    STATE(20), 1,
      sym_field_expression,
  [1593] = 3,
    STATE(54), 1,
      sym__null,
    ACTIONS(165), 2,
      anon_sym_NULL,
      anon_sym_null,
    ACTIONS(253), 2,
      anon_sym_NOT,
      anon_sym_not,
  [1605] = 1,
    ACTIONS(255), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_LIMIT,
      anon_sym_limit,
  [1613] = 1,
    ACTIONS(257), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_LIMIT,
      anon_sym_limit,
  [1621] = 2,
    STATE(33), 1,
      sym__null,
    ACTIONS(259), 2,
      anon_sym_NULL,
      anon_sym_null,
  [1629] = 2,
    STATE(6), 1,
      sym__aliase,
    ACTIONS(261), 2,
      anon_sym_AS,
      anon_sym_as,
  [1637] = 1,
    ACTIONS(243), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [1643] = 2,
    STATE(51), 1,
      sym__null,
    ACTIONS(263), 2,
      anon_sym_NULL,
      anon_sym_null,
  [1651] = 1,
    ACTIONS(69), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [1657] = 1,
    ACTIONS(265), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [1663] = 1,
    ACTIONS(267), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [1669] = 2,
    STATE(135), 1,
      sym_select_statement,
    ACTIONS(3), 2,
      anon_sym_SELECT,
      anon_sym_select,
  [1677] = 1,
    ACTIONS(35), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [1683] = 1,
    ACTIONS(63), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RPAREN,
  [1689] = 2,
    ACTIONS(269), 1,
      anon_sym_COMMA,
    ACTIONS(271), 1,
      anon_sym_RPAREN,
  [1696] = 2,
    ACTIONS(199), 1,
      anon_sym_RPAREN,
    ACTIONS(273), 1,
      anon_sym_COMMA,
  [1703] = 1,
    ACTIONS(275), 2,
      anon_sym_IN,
      anon_sym_in,
  [1708] = 1,
    ACTIONS(277), 2,
      anon_sym_JOIN,
      anon_sym_join,
  [1713] = 2,
    ACTIONS(279), 1,
      ts_builtin_sym_end,
    ACTIONS(281), 1,
      anon_sym_SEMI,
  [1720] = 1,
    ACTIONS(283), 2,
      anon_sym_ON,
      anon_sym_on,
  [1725] = 1,
    ACTIONS(285), 2,
      anon_sym_IN,
      anon_sym_in,
  [1730] = 2,
    ACTIONS(191), 1,
      anon_sym_RPAREN,
    ACTIONS(287), 1,
      anon_sym_COMMA,
  [1737] = 2,
    ACTIONS(289), 1,
      anon_sym_COMMA,
    ACTIONS(291), 1,
      anon_sym_RPAREN,
  [1744] = 1,
    ACTIONS(293), 2,
      anon_sym_AND,
      anon_sym_and,
  [1749] = 1,
    ACTIONS(295), 2,
      anon_sym_ON,
      anon_sym_on,
  [1754] = 1,
    ACTIONS(59), 2,
      anon_sym_ON,
      anon_sym_on,
  [1759] = 1,
    ACTIONS(297), 2,
      anon_sym_AND,
      anon_sym_and,
  [1764] = 1,
    ACTIONS(55), 2,
      anon_sym_ON,
      anon_sym_on,
  [1769] = 1,
    ACTIONS(299), 1,
      anon_sym_RPAREN,
  [1773] = 1,
    ACTIONS(301), 1,
      ts_builtin_sym_end,
  [1777] = 1,
    ACTIONS(303), 1,
      anon_sym_RPAREN,
  [1781] = 1,
    ACTIONS(305), 1,
      anon_sym_RPAREN,
  [1785] = 1,
    ACTIONS(307), 1,
      anon_sym_BQUOTE,
  [1789] = 1,
    ACTIONS(307), 1,
      anon_sym_RBRACK,
  [1793] = 1,
    ACTIONS(309), 1,
      sym__identifier,
  [1797] = 1,
    ACTIONS(311), 1,
      anon_sym_RBRACK,
  [1801] = 1,
    ACTIONS(313), 1,
      anon_sym_RPAREN,
  [1805] = 1,
    ACTIONS(315), 1,
      anon_sym_LPAREN,
  [1809] = 1,
    ACTIONS(317), 1,
      sym__identifier,
  [1813] = 1,
    ACTIONS(319), 1,
      anon_sym_BQUOTE,
  [1817] = 1,
    ACTIONS(321), 1,
      anon_sym_LPAREN,
  [1821] = 1,
    ACTIONS(319), 1,
      anon_sym_RBRACK,
  [1825] = 1,
    ACTIONS(323), 1,
      anon_sym_RPAREN,
  [1829] = 1,
    ACTIONS(325), 1,
      sym__number,
  [1833] = 1,
    ACTIONS(327), 1,
      anon_sym_RPAREN,
  [1837] = 1,
    ACTIONS(329), 1,
      sym__identifier,
  [1841] = 1,
    ACTIONS(331), 1,
      sym__identifier,
  [1845] = 1,
    ACTIONS(333), 1,
      sym__identifier,
  [1849] = 1,
    ACTIONS(311), 1,
      anon_sym_BQUOTE,
  [1853] = 1,
    ACTIONS(335), 1,
      ts_builtin_sym_end,
  [1857] = 1,
    ACTIONS(337), 1,
      sym__identifier,
  [1861] = 1,
    ACTIONS(339), 1,
      sym__identifier,
  [1865] = 1,
    ACTIONS(341), 1,
      sym__number,
  [1869] = 1,
    ACTIONS(343), 1,
      anon_sym_RPAREN,
  [1873] = 1,
    ACTIONS(345), 1,
      sym__identifier,
  [1877] = 1,
    ACTIONS(347), 1,
      sym__identifier,
  [1881] = 1,
    ACTIONS(349), 1,
      anon_sym_LPAREN,
  [1885] = 1,
    ACTIONS(351), 1,
      anon_sym_LPAREN,
  [1889] = 1,
    ACTIONS(353), 1,
      anon_sym_RPAREN,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 28,
  [SMALL_STATE(4)] = 58,
  [SMALL_STATE(5)] = 84,
  [SMALL_STATE(6)] = 109,
  [SMALL_STATE(7)] = 139,
  [SMALL_STATE(8)] = 165,
  [SMALL_STATE(9)] = 189,
  [SMALL_STATE(10)] = 237,
  [SMALL_STATE(11)] = 285,
  [SMALL_STATE(12)] = 315,
  [SMALL_STATE(13)] = 338,
  [SMALL_STATE(14)] = 361,
  [SMALL_STATE(15)] = 384,
  [SMALL_STATE(16)] = 425,
  [SMALL_STATE(17)] = 450,
  [SMALL_STATE(18)] = 473,
  [SMALL_STATE(19)] = 514,
  [SMALL_STATE(20)] = 535,
  [SMALL_STATE(21)] = 555,
  [SMALL_STATE(22)] = 582,
  [SMALL_STATE(23)] = 609,
  [SMALL_STATE(24)] = 627,
  [SMALL_STATE(25)] = 647,
  [SMALL_STATE(26)] = 665,
  [SMALL_STATE(27)] = 682,
  [SMALL_STATE(28)] = 712,
  [SMALL_STATE(29)] = 727,
  [SMALL_STATE(30)] = 742,
  [SMALL_STATE(31)] = 757,
  [SMALL_STATE(32)] = 772,
  [SMALL_STATE(33)] = 787,
  [SMALL_STATE(34)] = 802,
  [SMALL_STATE(35)] = 817,
  [SMALL_STATE(36)] = 832,
  [SMALL_STATE(37)] = 847,
  [SMALL_STATE(38)] = 862,
  [SMALL_STATE(39)] = 877,
  [SMALL_STATE(40)] = 892,
  [SMALL_STATE(41)] = 904,
  [SMALL_STATE(42)] = 920,
  [SMALL_STATE(43)] = 936,
  [SMALL_STATE(44)] = 952,
  [SMALL_STATE(45)] = 968,
  [SMALL_STATE(46)] = 994,
  [SMALL_STATE(47)] = 1010,
  [SMALL_STATE(48)] = 1026,
  [SMALL_STATE(49)] = 1042,
  [SMALL_STATE(50)] = 1058,
  [SMALL_STATE(51)] = 1084,
  [SMALL_STATE(52)] = 1096,
  [SMALL_STATE(53)] = 1112,
  [SMALL_STATE(54)] = 1124,
  [SMALL_STATE(55)] = 1136,
  [SMALL_STATE(56)] = 1150,
  [SMALL_STATE(57)] = 1166,
  [SMALL_STATE(58)] = 1178,
  [SMALL_STATE(59)] = 1194,
  [SMALL_STATE(60)] = 1210,
  [SMALL_STATE(61)] = 1222,
  [SMALL_STATE(62)] = 1238,
  [SMALL_STATE(63)] = 1254,
  [SMALL_STATE(64)] = 1279,
  [SMALL_STATE(65)] = 1301,
  [SMALL_STATE(66)] = 1323,
  [SMALL_STATE(67)] = 1345,
  [SMALL_STATE(68)] = 1367,
  [SMALL_STATE(69)] = 1389,
  [SMALL_STATE(70)] = 1411,
  [SMALL_STATE(71)] = 1424,
  [SMALL_STATE(72)] = 1443,
  [SMALL_STATE(73)] = 1456,
  [SMALL_STATE(74)] = 1475,
  [SMALL_STATE(75)] = 1488,
  [SMALL_STATE(76)] = 1501,
  [SMALL_STATE(77)] = 1509,
  [SMALL_STATE(78)] = 1521,
  [SMALL_STATE(79)] = 1533,
  [SMALL_STATE(80)] = 1549,
  [SMALL_STATE(81)] = 1565,
  [SMALL_STATE(82)] = 1577,
  [SMALL_STATE(83)] = 1593,
  [SMALL_STATE(84)] = 1605,
  [SMALL_STATE(85)] = 1613,
  [SMALL_STATE(86)] = 1621,
  [SMALL_STATE(87)] = 1629,
  [SMALL_STATE(88)] = 1637,
  [SMALL_STATE(89)] = 1643,
  [SMALL_STATE(90)] = 1651,
  [SMALL_STATE(91)] = 1657,
  [SMALL_STATE(92)] = 1663,
  [SMALL_STATE(93)] = 1669,
  [SMALL_STATE(94)] = 1677,
  [SMALL_STATE(95)] = 1683,
  [SMALL_STATE(96)] = 1689,
  [SMALL_STATE(97)] = 1696,
  [SMALL_STATE(98)] = 1703,
  [SMALL_STATE(99)] = 1708,
  [SMALL_STATE(100)] = 1713,
  [SMALL_STATE(101)] = 1720,
  [SMALL_STATE(102)] = 1725,
  [SMALL_STATE(103)] = 1730,
  [SMALL_STATE(104)] = 1737,
  [SMALL_STATE(105)] = 1744,
  [SMALL_STATE(106)] = 1749,
  [SMALL_STATE(107)] = 1754,
  [SMALL_STATE(108)] = 1759,
  [SMALL_STATE(109)] = 1764,
  [SMALL_STATE(110)] = 1769,
  [SMALL_STATE(111)] = 1773,
  [SMALL_STATE(112)] = 1777,
  [SMALL_STATE(113)] = 1781,
  [SMALL_STATE(114)] = 1785,
  [SMALL_STATE(115)] = 1789,
  [SMALL_STATE(116)] = 1793,
  [SMALL_STATE(117)] = 1797,
  [SMALL_STATE(118)] = 1801,
  [SMALL_STATE(119)] = 1805,
  [SMALL_STATE(120)] = 1809,
  [SMALL_STATE(121)] = 1813,
  [SMALL_STATE(122)] = 1817,
  [SMALL_STATE(123)] = 1821,
  [SMALL_STATE(124)] = 1825,
  [SMALL_STATE(125)] = 1829,
  [SMALL_STATE(126)] = 1833,
  [SMALL_STATE(127)] = 1837,
  [SMALL_STATE(128)] = 1841,
  [SMALL_STATE(129)] = 1845,
  [SMALL_STATE(130)] = 1849,
  [SMALL_STATE(131)] = 1853,
  [SMALL_STATE(132)] = 1857,
  [SMALL_STATE(133)] = 1861,
  [SMALL_STATE(134)] = 1865,
  [SMALL_STATE(135)] = 1869,
  [SMALL_STATE(136)] = 1873,
  [SMALL_STATE(137)] = 1877,
  [SMALL_STATE(138)] = 1881,
  [SMALL_STATE(139)] = 1885,
  [SMALL_STATE(140)] = 1889,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_expression, 1),
  [7] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_expression, 1),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbole_definition, 1),
  [13] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbole_definition, 1),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field_expression, 3),
  [19] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__field_expression, 3),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_expression, 3),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_expression, 3),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_clause, 5),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_clause, 5),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 4),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 2),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_clause, 2),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_clause, 2),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbole_definition, 2),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbole_definition, 2),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__aliase, 2),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__aliase, 2),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 5),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 3),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_fields, 1),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_fields, 1),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_fields, 3),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_select_fields, 3),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 6),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition, 6),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 8),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition, 8),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 5),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition, 5),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_clause, 6),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_clause, 6),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_join_clause, 4),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_join_clause, 4),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 4),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition, 4),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 3),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition, 3),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_join_clause, 5),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_join_clause, 5),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from_clause, 3),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_from_clause, 3),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_join_clause, 6),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_join_clause, 6),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_join_clause, 7),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_join_clause, 7),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 7),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition, 7),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditions, 1),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 6),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_clause, 1),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditions, 3),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conditions, 5),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit_clause, 2),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_statement, 7),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [335] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_sql(void) {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = (const uint16_t *)ts_parse_table,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif

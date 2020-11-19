#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 82
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 71
#define ALIAS_COUNT 0
#define TOKEN_COUNT 46
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4

enum {
  anon_sym_schema = 1,
  anon_sym_LBRACE = 2,
  anon_sym_RBRACE = 3,
  anon_sym_query = 4,
  anon_sym_mutation = 5,
  anon_sym_subscription = 6,
  anon_sym_COLON = 7,
  anon_sym_LPAREN = 8,
  anon_sym_RPAREN = 9,
  anon_sym_DOLLAR = 10,
  anon_sym_DQUOTE_DQUOTE_DQUOTE = 11,
  aux_sym_string_value_token1 = 12,
  anon_sym_DQUOTE = 13,
  aux_sym_string_value_token2 = 14,
  sym_int_value = 15,
  sym_float_value = 16,
  anon_sym_true = 17,
  anon_sym_false = 18,
  sym_null_value = 19,
  anon_sym_LBRACK = 20,
  anon_sym_RBRACK = 21,
  anon_sym_AT = 22,
  anon_sym_on = 23,
  anon_sym_QUERY = 24,
  anon_sym_MUTATION = 25,
  anon_sym_SUBSCRIPTION = 26,
  anon_sym_FIELD = 27,
  anon_sym_FRAGMENT_DEFINITION = 28,
  anon_sym_FRAGMENT_SPREAD = 29,
  anon_sym_INLINE_FRAGMENT = 30,
  anon_sym_VARIABLE_DEFINITION = 31,
  anon_sym_SCHEMA = 32,
  anon_sym_SCALAR = 33,
  anon_sym_OBJECT = 34,
  anon_sym_FIELD_DEFINITION = 35,
  anon_sym_ARGUMENT_DEFINITION = 36,
  anon_sym_INTERFACE = 37,
  anon_sym_UNION = 38,
  anon_sym_ENUM = 39,
  anon_sym_ENUM_VALUE = 40,
  anon_sym_INPUT_OBJECT = 41,
  anon_sym_INPUT_FIELD_DEFINITION = 42,
  sym_name = 43,
  sym_comment = 44,
  sym_comma = 45,
  sym_source_file = 46,
  sym_document = 47,
  sym_definition = 48,
  sym_executable_definition = 49,
  sym_operation_definition = 50,
  sym_operation_type = 51,
  sym_selection_set = 52,
  sym_selection = 53,
  sym_field = 54,
  sym_alias = 55,
  sym_arguments = 56,
  sym_argument = 57,
  sym_value = 58,
  sym_variable = 59,
  sym_string_value = 60,
  sym_boolean_value = 61,
  sym_enum_value = 62,
  sym_list_value = 63,
  sym_object_value = 64,
  sym_object_field = 65,
  aux_sym_document_repeat1 = 66,
  aux_sym_selection_set_repeat1 = 67,
  aux_sym_arguments_repeat1 = 68,
  aux_sym_list_value_repeat1 = 69,
  aux_sym_object_value_repeat1 = 70,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_schema] = "schema",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_query] = "query",
  [anon_sym_mutation] = "mutation",
  [anon_sym_subscription] = "subscription",
  [anon_sym_COLON] = ":",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = "\"\"\"",
  [aux_sym_string_value_token1] = "string_value_token1",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_value_token2] = "string_value_token2",
  [sym_int_value] = "int_value",
  [sym_float_value] = "float_value",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_null_value] = "null_value",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_AT] = "@",
  [anon_sym_on] = "on",
  [anon_sym_QUERY] = "QUERY",
  [anon_sym_MUTATION] = "MUTATION",
  [anon_sym_SUBSCRIPTION] = "SUBSCRIPTION",
  [anon_sym_FIELD] = "FIELD",
  [anon_sym_FRAGMENT_DEFINITION] = "FRAGMENT_DEFINITION",
  [anon_sym_FRAGMENT_SPREAD] = "FRAGMENT_SPREAD",
  [anon_sym_INLINE_FRAGMENT] = "INLINE_FRAGMENT",
  [anon_sym_VARIABLE_DEFINITION] = "VARIABLE_DEFINITION",
  [anon_sym_SCHEMA] = "SCHEMA",
  [anon_sym_SCALAR] = "SCALAR",
  [anon_sym_OBJECT] = "OBJECT",
  [anon_sym_FIELD_DEFINITION] = "FIELD_DEFINITION",
  [anon_sym_ARGUMENT_DEFINITION] = "ARGUMENT_DEFINITION",
  [anon_sym_INTERFACE] = "INTERFACE",
  [anon_sym_UNION] = "UNION",
  [anon_sym_ENUM] = "ENUM",
  [anon_sym_ENUM_VALUE] = "ENUM_VALUE",
  [anon_sym_INPUT_OBJECT] = "INPUT_OBJECT",
  [anon_sym_INPUT_FIELD_DEFINITION] = "INPUT_FIELD_DEFINITION",
  [sym_name] = "name",
  [sym_comment] = "comment",
  [sym_comma] = "comma",
  [sym_source_file] = "source_file",
  [sym_document] = "document",
  [sym_definition] = "definition",
  [sym_executable_definition] = "executable_definition",
  [sym_operation_definition] = "operation_definition",
  [sym_operation_type] = "operation_type",
  [sym_selection_set] = "selection_set",
  [sym_selection] = "selection",
  [sym_field] = "field",
  [sym_alias] = "alias",
  [sym_arguments] = "arguments",
  [sym_argument] = "argument",
  [sym_value] = "value",
  [sym_variable] = "variable",
  [sym_string_value] = "string_value",
  [sym_boolean_value] = "boolean_value",
  [sym_enum_value] = "enum_value",
  [sym_list_value] = "list_value",
  [sym_object_value] = "object_value",
  [sym_object_field] = "object_field",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_selection_set_repeat1] = "selection_set_repeat1",
  [aux_sym_arguments_repeat1] = "arguments_repeat1",
  [aux_sym_list_value_repeat1] = "list_value_repeat1",
  [aux_sym_object_value_repeat1] = "object_value_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_schema] = anon_sym_schema,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_query] = anon_sym_query,
  [anon_sym_mutation] = anon_sym_mutation,
  [anon_sym_subscription] = anon_sym_subscription,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [aux_sym_string_value_token1] = aux_sym_string_value_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_value_token2] = aux_sym_string_value_token2,
  [sym_int_value] = sym_int_value,
  [sym_float_value] = sym_float_value,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_null_value] = sym_null_value,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_on] = anon_sym_on,
  [anon_sym_QUERY] = anon_sym_QUERY,
  [anon_sym_MUTATION] = anon_sym_MUTATION,
  [anon_sym_SUBSCRIPTION] = anon_sym_SUBSCRIPTION,
  [anon_sym_FIELD] = anon_sym_FIELD,
  [anon_sym_FRAGMENT_DEFINITION] = anon_sym_FRAGMENT_DEFINITION,
  [anon_sym_FRAGMENT_SPREAD] = anon_sym_FRAGMENT_SPREAD,
  [anon_sym_INLINE_FRAGMENT] = anon_sym_INLINE_FRAGMENT,
  [anon_sym_VARIABLE_DEFINITION] = anon_sym_VARIABLE_DEFINITION,
  [anon_sym_SCHEMA] = anon_sym_SCHEMA,
  [anon_sym_SCALAR] = anon_sym_SCALAR,
  [anon_sym_OBJECT] = anon_sym_OBJECT,
  [anon_sym_FIELD_DEFINITION] = anon_sym_FIELD_DEFINITION,
  [anon_sym_ARGUMENT_DEFINITION] = anon_sym_ARGUMENT_DEFINITION,
  [anon_sym_INTERFACE] = anon_sym_INTERFACE,
  [anon_sym_UNION] = anon_sym_UNION,
  [anon_sym_ENUM] = anon_sym_ENUM,
  [anon_sym_ENUM_VALUE] = anon_sym_ENUM_VALUE,
  [anon_sym_INPUT_OBJECT] = anon_sym_INPUT_OBJECT,
  [anon_sym_INPUT_FIELD_DEFINITION] = anon_sym_INPUT_FIELD_DEFINITION,
  [sym_name] = sym_name,
  [sym_comment] = sym_comment,
  [sym_comma] = sym_comma,
  [sym_source_file] = sym_source_file,
  [sym_document] = sym_document,
  [sym_definition] = sym_definition,
  [sym_executable_definition] = sym_executable_definition,
  [sym_operation_definition] = sym_operation_definition,
  [sym_operation_type] = sym_operation_type,
  [sym_selection_set] = sym_selection_set,
  [sym_selection] = sym_selection,
  [sym_field] = sym_field,
  [sym_alias] = sym_alias,
  [sym_arguments] = sym_arguments,
  [sym_argument] = sym_argument,
  [sym_value] = sym_value,
  [sym_variable] = sym_variable,
  [sym_string_value] = sym_string_value,
  [sym_boolean_value] = sym_boolean_value,
  [sym_enum_value] = sym_enum_value,
  [sym_list_value] = sym_list_value,
  [sym_object_value] = sym_object_value,
  [sym_object_field] = sym_object_field,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_selection_set_repeat1] = aux_sym_selection_set_repeat1,
  [aux_sym_arguments_repeat1] = aux_sym_arguments_repeat1,
  [aux_sym_list_value_repeat1] = aux_sym_list_value_repeat1,
  [aux_sym_object_value_repeat1] = aux_sym_object_value_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_schema] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_query] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mutation] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_subscription] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
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
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_value_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_value_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_int_value] = {
    .visible = true,
    .named = true,
  },
  [sym_float_value] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [sym_null_value] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_on] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QUERY] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MUTATION] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SUBSCRIPTION] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FIELD] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FRAGMENT_DEFINITION] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FRAGMENT_SPREAD] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_INLINE_FRAGMENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_VARIABLE_DEFINITION] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SCHEMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SCALAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OBJECT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FIELD_DEFINITION] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ARGUMENT_DEFINITION] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_INTERFACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_UNION] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ENUM] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ENUM_VALUE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_INPUT_OBJECT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_INPUT_FIELD_DEFINITION] = {
    .visible = true,
    .named = false,
  },
  [sym_name] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_comma] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_executable_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_operation_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_operation_type] = {
    .visible = true,
    .named = true,
  },
  [sym_selection_set] = {
    .visible = true,
    .named = true,
  },
  [sym_selection] = {
    .visible = true,
    .named = true,
  },
  [sym_field] = {
    .visible = true,
    .named = true,
  },
  [sym_alias] = {
    .visible = true,
    .named = true,
  },
  [sym_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym_argument] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_string_value] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean_value] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_value] = {
    .visible = true,
    .named = true,
  },
  [sym_list_value] = {
    .visible = true,
    .named = true,
  },
  [sym_object_value] = {
    .visible = true,
    .named = true,
  },
  [sym_object_field] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_selection_set_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_arguments_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_list_value_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_object_value_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static TSSymbol ts_alias_sequences[1][MAX_ALIAS_SEQUENCE_LENGTH] = {
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
      if (eof) ADVANCE(209);
      if (lookahead == '"') ADVANCE(224);
      if (lookahead == '#') ADVANCE(271);
      if (lookahead == '$') ADVANCE(219);
      if (lookahead == '(') ADVANCE(217);
      if (lookahead == ')') ADVANCE(218);
      if (lookahead == ',') ADVANCE(272);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == '0') ADVANCE(227);
      if (lookahead == ':') ADVANCE(216);
      if (lookahead == '@') ADVANCE(239);
      if (lookahead == 'A') ADVANCE(131);
      if (lookahead == 'E') ADVANCE(111);
      if (lookahead == 'F') ADVANCE(65);
      if (lookahead == 'I') ADVANCE(101);
      if (lookahead == 'M') ADVANCE(154);
      if (lookahead == 'O') ADVANCE(17);
      if (lookahead == 'Q') ADVANCE(156);
      if (lookahead == 'S') ADVANCE(21);
      if (lookahead == 'U') ADVANCE(102);
      if (lookahead == 'V') ADVANCE(7);
      if (lookahead == '[') ADVANCE(237);
      if (lookahead == ']') ADVANCE(238);
      if (lookahead == 'f') ADVANCE(168);
      if (lookahead == 'm') ADVANCE(200);
      if (lookahead == 'n') ADVANCE(202);
      if (lookahead == 'o') ADVANCE(186);
      if (lookahead == 'q') ADVANCE(201);
      if (lookahead == 's') ADVANCE(172);
      if (lookahead == 't') ADVANCE(194);
      if (lookahead == '{') ADVANCE(211);
      if (lookahead == '}') ADVANCE(212);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(228);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(224);
      if (lookahead == '$') ADVANCE(219);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == '0') ADVANCE(227);
      if (lookahead == '[') ADVANCE(237);
      if (lookahead == ']') ADVANCE(238);
      if (lookahead == 'f') ADVANCE(260);
      if (lookahead == 'n') ADVANCE(269);
      if (lookahead == 't') ADVANCE(266);
      if (lookahead == '{') ADVANCE(211);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(228);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(220);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(223);
      if (lookahead == '(') ADVANCE(217);
      if (lookahead == ')') ADVANCE(218);
      if (lookahead == ':') ADVANCE(216);
      if (lookahead == '{') ADVANCE(211);
      if (lookahead == '}') ADVANCE(212);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(208);
      if (lookahead != 0) ADVANCE(222);
      END_STATE();
    case 5:
      if (lookahead == '0') ADVANCE(227);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(228);
      END_STATE();
    case 6:
      if (lookahead == 'A') ADVANCE(249);
      END_STATE();
    case 7:
      if (lookahead == 'A') ADVANCE(135);
      END_STATE();
    case 8:
      if (lookahead == 'A') ADVANCE(63);
      END_STATE();
    case 9:
      if (lookahead == 'A') ADVANCE(94);
      if (lookahead == 'H') ADVANCE(40);
      END_STATE();
    case 10:
      if (lookahead == 'A') ADVANCE(19);
      END_STATE();
    case 11:
      if (lookahead == 'A') ADVANCE(147);
      END_STATE();
    case 12:
      if (lookahead == 'A') ADVANCE(24);
      END_STATE();
    case 13:
      if (lookahead == 'A') ADVANCE(95);
      END_STATE();
    case 14:
      if (lookahead == 'A') ADVANCE(27);
      END_STATE();
    case 15:
      if (lookahead == 'A') ADVANCE(134);
      END_STATE();
    case 16:
      if (lookahead == 'A') ADVANCE(64);
      END_STATE();
    case 17:
      if (lookahead == 'B') ADVANCE(88);
      END_STATE();
    case 18:
      if (lookahead == 'B') ADVANCE(139);
      END_STATE();
    case 19:
      if (lookahead == 'B') ADVANCE(93);
      END_STATE();
    case 20:
      if (lookahead == 'B') ADVANCE(89);
      END_STATE();
    case 21:
      if (lookahead == 'C') ADVANCE(9);
      if (lookahead == 'U') ADVANCE(18);
      END_STATE();
    case 22:
      if (lookahead == 'C') ADVANCE(141);
      END_STATE();
    case 23:
      if (lookahead == 'C') ADVANCE(142);
      END_STATE();
    case 24:
      if (lookahead == 'C') ADVANCE(36);
      END_STATE();
    case 25:
      if (lookahead == 'C') ADVANCE(136);
      END_STATE();
    case 26:
      if (lookahead == 'D') ADVANCE(244);
      END_STATE();
    case 27:
      if (lookahead == 'D') ADVANCE(246);
      END_STATE();
    case 28:
      if (lookahead == 'D') ADVANCE(41);
      END_STATE();
    case 29:
      if (lookahead == 'D') ADVANCE(49);
      END_STATE();
    case 30:
      if (lookahead == 'D') ADVANCE(50);
      if (lookahead == 'S') ADVANCE(129);
      END_STATE();
    case 31:
      if (lookahead == 'D') ADVANCE(51);
      END_STATE();
    case 32:
      if (lookahead == 'D') ADVANCE(52);
      END_STATE();
    case 33:
      if (lookahead == 'D') ADVANCE(167);
      END_STATE();
    case 34:
      if (lookahead == 'E') ADVANCE(90);
      END_STATE();
    case 35:
      if (lookahead == 'E') ADVANCE(22);
      END_STATE();
    case 36:
      if (lookahead == 'E') ADVANCE(254);
      END_STATE();
    case 37:
      if (lookahead == 'E') ADVANCE(257);
      END_STATE();
    case 38:
      if (lookahead == 'E') ADVANCE(164);
      END_STATE();
    case 39:
      if (lookahead == 'E') ADVANCE(132);
      END_STATE();
    case 40:
      if (lookahead == 'E') ADVANCE(97);
      END_STATE();
    case 41:
      if (lookahead == 'E') ADVANCE(57);
      END_STATE();
    case 42:
      if (lookahead == 'E') ADVANCE(133);
      END_STATE();
    case 43:
      if (lookahead == 'E') ADVANCE(112);
      END_STATE();
    case 44:
      if (lookahead == 'E') ADVANCE(114);
      END_STATE();
    case 45:
      if (lookahead == 'E') ADVANCE(14);
      END_STATE();
    case 46:
      if (lookahead == 'E') ADVANCE(116);
      END_STATE();
    case 47:
      if (lookahead == 'E') ADVANCE(92);
      END_STATE();
    case 48:
      if (lookahead == 'E') ADVANCE(23);
      END_STATE();
    case 49:
      if (lookahead == 'E') ADVANCE(58);
      END_STATE();
    case 50:
      if (lookahead == 'E') ADVANCE(59);
      END_STATE();
    case 51:
      if (lookahead == 'E') ADVANCE(60);
      END_STATE();
    case 52:
      if (lookahead == 'E') ADVANCE(61);
      END_STATE();
    case 53:
      if (lookahead == 'E') ADVANCE(166);
      END_STATE();
    case 54:
      if (lookahead == 'F') ADVANCE(78);
      if (lookahead == 'O') ADVANCE(20);
      END_STATE();
    case 55:
      if (lookahead == 'F') ADVANCE(138);
      END_STATE();
    case 56:
      if (lookahead == 'F') ADVANCE(12);
      END_STATE();
    case 57:
      if (lookahead == 'F') ADVANCE(70);
      END_STATE();
    case 58:
      if (lookahead == 'F') ADVANCE(84);
      END_STATE();
    case 59:
      if (lookahead == 'F') ADVANCE(85);
      END_STATE();
    case 60:
      if (lookahead == 'F') ADVANCE(86);
      END_STATE();
    case 61:
      if (lookahead == 'F') ADVANCE(87);
      END_STATE();
    case 62:
      if (lookahead == 'G') ADVANCE(158);
      END_STATE();
    case 63:
      if (lookahead == 'G') ADVANCE(99);
      END_STATE();
    case 64:
      if (lookahead == 'G') ADVANCE(100);
      END_STATE();
    case 65:
      if (lookahead == 'I') ADVANCE(34);
      if (lookahead == 'R') ADVANCE(8);
      END_STATE();
    case 66:
      if (lookahead == 'I') ADVANCE(121);
      END_STATE();
    case 67:
      if (lookahead == 'I') ADVANCE(130);
      END_STATE();
    case 68:
      if (lookahead == 'I') ADVANCE(113);
      END_STATE();
    case 69:
      if (lookahead == 'I') ADVANCE(10);
      END_STATE();
    case 70:
      if (lookahead == 'I') ADVANCE(115);
      END_STATE();
    case 71:
      if (lookahead == 'I') ADVANCE(122);
      END_STATE();
    case 72:
      if (lookahead == 'I') ADVANCE(123);
      END_STATE();
    case 73:
      if (lookahead == 'I') ADVANCE(124);
      END_STATE();
    case 74:
      if (lookahead == 'I') ADVANCE(125);
      END_STATE();
    case 75:
      if (lookahead == 'I') ADVANCE(126);
      END_STATE();
    case 76:
      if (lookahead == 'I') ADVANCE(127);
      END_STATE();
    case 77:
      if (lookahead == 'I') ADVANCE(128);
      END_STATE();
    case 78:
      if (lookahead == 'I') ADVANCE(47);
      END_STATE();
    case 79:
      if (lookahead == 'I') ADVANCE(149);
      END_STATE();
    case 80:
      if (lookahead == 'I') ADVANCE(150);
      END_STATE();
    case 81:
      if (lookahead == 'I') ADVANCE(151);
      END_STATE();
    case 82:
      if (lookahead == 'I') ADVANCE(152);
      END_STATE();
    case 83:
      if (lookahead == 'I') ADVANCE(153);
      END_STATE();
    case 84:
      if (lookahead == 'I') ADVANCE(117);
      END_STATE();
    case 85:
      if (lookahead == 'I') ADVANCE(118);
      END_STATE();
    case 86:
      if (lookahead == 'I') ADVANCE(119);
      END_STATE();
    case 87:
      if (lookahead == 'I') ADVANCE(120);
      END_STATE();
    case 88:
      if (lookahead == 'J') ADVANCE(35);
      END_STATE();
    case 89:
      if (lookahead == 'J') ADVANCE(48);
      END_STATE();
    case 90:
      if (lookahead == 'L') ADVANCE(26);
      END_STATE();
    case 91:
      if (lookahead == 'L') ADVANCE(68);
      if (lookahead == 'P') ADVANCE(157);
      if (lookahead == 'T') ADVANCE(42);
      END_STATE();
    case 92:
      if (lookahead == 'L') ADVANCE(33);
      END_STATE();
    case 93:
      if (lookahead == 'L') ADVANCE(53);
      END_STATE();
    case 94:
      if (lookahead == 'L') ADVANCE(15);
      END_STATE();
    case 95:
      if (lookahead == 'L') ADVANCE(159);
      END_STATE();
    case 96:
      if (lookahead == 'M') ADVANCE(256);
      END_STATE();
    case 97:
      if (lookahead == 'M') ADVANCE(6);
      END_STATE();
    case 98:
      if (lookahead == 'M') ADVANCE(43);
      END_STATE();
    case 99:
      if (lookahead == 'M') ADVANCE(44);
      END_STATE();
    case 100:
      if (lookahead == 'M') ADVANCE(46);
      END_STATE();
    case 101:
      if (lookahead == 'N') ADVANCE(91);
      END_STATE();
    case 102:
      if (lookahead == 'N') ADVANCE(66);
      END_STATE();
    case 103:
      if (lookahead == 'N') ADVANCE(255);
      END_STATE();
    case 104:
      if (lookahead == 'N') ADVANCE(242);
      END_STATE();
    case 105:
      if (lookahead == 'N') ADVANCE(243);
      END_STATE();
    case 106:
      if (lookahead == 'N') ADVANCE(252);
      END_STATE();
    case 107:
      if (lookahead == 'N') ADVANCE(253);
      END_STATE();
    case 108:
      if (lookahead == 'N') ADVANCE(245);
      END_STATE();
    case 109:
      if (lookahead == 'N') ADVANCE(248);
      END_STATE();
    case 110:
      if (lookahead == 'N') ADVANCE(259);
      END_STATE();
    case 111:
      if (lookahead == 'N') ADVANCE(155);
      END_STATE();
    case 112:
      if (lookahead == 'N') ADVANCE(145);
      END_STATE();
    case 113:
      if (lookahead == 'N') ADVANCE(38);
      END_STATE();
    case 114:
      if (lookahead == 'N') ADVANCE(146);
      END_STATE();
    case 115:
      if (lookahead == 'N') ADVANCE(79);
      END_STATE();
    case 116:
      if (lookahead == 'N') ADVANCE(143);
      END_STATE();
    case 117:
      if (lookahead == 'N') ADVANCE(80);
      END_STATE();
    case 118:
      if (lookahead == 'N') ADVANCE(81);
      END_STATE();
    case 119:
      if (lookahead == 'N') ADVANCE(82);
      END_STATE();
    case 120:
      if (lookahead == 'N') ADVANCE(83);
      END_STATE();
    case 121:
      if (lookahead == 'O') ADVANCE(103);
      END_STATE();
    case 122:
      if (lookahead == 'O') ADVANCE(104);
      END_STATE();
    case 123:
      if (lookahead == 'O') ADVANCE(105);
      END_STATE();
    case 124:
      if (lookahead == 'O') ADVANCE(106);
      END_STATE();
    case 125:
      if (lookahead == 'O') ADVANCE(107);
      END_STATE();
    case 126:
      if (lookahead == 'O') ADVANCE(108);
      END_STATE();
    case 127:
      if (lookahead == 'O') ADVANCE(109);
      END_STATE();
    case 128:
      if (lookahead == 'O') ADVANCE(110);
      END_STATE();
    case 129:
      if (lookahead == 'P') ADVANCE(137);
      END_STATE();
    case 130:
      if (lookahead == 'P') ADVANCE(148);
      END_STATE();
    case 131:
      if (lookahead == 'R') ADVANCE(62);
      END_STATE();
    case 132:
      if (lookahead == 'R') ADVANCE(161);
      END_STATE();
    case 133:
      if (lookahead == 'R') ADVANCE(56);
      END_STATE();
    case 134:
      if (lookahead == 'R') ADVANCE(250);
      END_STATE();
    case 135:
      if (lookahead == 'R') ADVANCE(69);
      END_STATE();
    case 136:
      if (lookahead == 'R') ADVANCE(67);
      END_STATE();
    case 137:
      if (lookahead == 'R') ADVANCE(45);
      END_STATE();
    case 138:
      if (lookahead == 'R') ADVANCE(16);
      END_STATE();
    case 139:
      if (lookahead == 'S') ADVANCE(25);
      END_STATE();
    case 140:
      if (lookahead == 'T') ADVANCE(162);
      END_STATE();
    case 141:
      if (lookahead == 'T') ADVANCE(251);
      END_STATE();
    case 142:
      if (lookahead == 'T') ADVANCE(258);
      END_STATE();
    case 143:
      if (lookahead == 'T') ADVANCE(247);
      END_STATE();
    case 144:
      if (lookahead == 'T') ADVANCE(11);
      END_STATE();
    case 145:
      if (lookahead == 'T') ADVANCE(165);
      END_STATE();
    case 146:
      if (lookahead == 'T') ADVANCE(163);
      END_STATE();
    case 147:
      if (lookahead == 'T') ADVANCE(71);
      END_STATE();
    case 148:
      if (lookahead == 'T') ADVANCE(72);
      END_STATE();
    case 149:
      if (lookahead == 'T') ADVANCE(73);
      END_STATE();
    case 150:
      if (lookahead == 'T') ADVANCE(74);
      END_STATE();
    case 151:
      if (lookahead == 'T') ADVANCE(75);
      END_STATE();
    case 152:
      if (lookahead == 'T') ADVANCE(76);
      END_STATE();
    case 153:
      if (lookahead == 'T') ADVANCE(77);
      END_STATE();
    case 154:
      if (lookahead == 'U') ADVANCE(144);
      END_STATE();
    case 155:
      if (lookahead == 'U') ADVANCE(96);
      END_STATE();
    case 156:
      if (lookahead == 'U') ADVANCE(39);
      END_STATE();
    case 157:
      if (lookahead == 'U') ADVANCE(140);
      END_STATE();
    case 158:
      if (lookahead == 'U') ADVANCE(98);
      END_STATE();
    case 159:
      if (lookahead == 'U') ADVANCE(37);
      END_STATE();
    case 160:
      if (lookahead == 'V') ADVANCE(13);
      END_STATE();
    case 161:
      if (lookahead == 'Y') ADVANCE(241);
      END_STATE();
    case 162:
      if (lookahead == '_') ADVANCE(54);
      END_STATE();
    case 163:
      if (lookahead == '_') ADVANCE(30);
      END_STATE();
    case 164:
      if (lookahead == '_') ADVANCE(55);
      END_STATE();
    case 165:
      if (lookahead == '_') ADVANCE(29);
      END_STATE();
    case 166:
      if (lookahead == '_') ADVANCE(31);
      END_STATE();
    case 167:
      if (lookahead == '_') ADVANCE(32);
      END_STATE();
    case 168:
      if (lookahead == 'a') ADVANCE(182);
      END_STATE();
    case 169:
      if (lookahead == 'a') ADVANCE(210);
      END_STATE();
    case 170:
      if (lookahead == 'a') ADVANCE(197);
      END_STATE();
    case 171:
      if (lookahead == 'b') ADVANCE(195);
      END_STATE();
    case 172:
      if (lookahead == 'c') ADVANCE(178);
      if (lookahead == 'u') ADVANCE(171);
      END_STATE();
    case 173:
      if (lookahead == 'c') ADVANCE(193);
      END_STATE();
    case 174:
      if (lookahead == 'e') ADVANCE(185);
      END_STATE();
    case 175:
      if (lookahead == 'e') ADVANCE(231);
      END_STATE();
    case 176:
      if (lookahead == 'e') ADVANCE(233);
      END_STATE();
    case 177:
      if (lookahead == 'e') ADVANCE(192);
      END_STATE();
    case 178:
      if (lookahead == 'h') ADVANCE(174);
      END_STATE();
    case 179:
      if (lookahead == 'i') ADVANCE(189);
      END_STATE();
    case 180:
      if (lookahead == 'i') ADVANCE(191);
      END_STATE();
    case 181:
      if (lookahead == 'i') ADVANCE(190);
      END_STATE();
    case 182:
      if (lookahead == 'l') ADVANCE(196);
      END_STATE();
    case 183:
      if (lookahead == 'l') ADVANCE(235);
      END_STATE();
    case 184:
      if (lookahead == 'l') ADVANCE(183);
      END_STATE();
    case 185:
      if (lookahead == 'm') ADVANCE(169);
      END_STATE();
    case 186:
      if (lookahead == 'n') ADVANCE(240);
      END_STATE();
    case 187:
      if (lookahead == 'n') ADVANCE(214);
      END_STATE();
    case 188:
      if (lookahead == 'n') ADVANCE(215);
      END_STATE();
    case 189:
      if (lookahead == 'o') ADVANCE(187);
      END_STATE();
    case 190:
      if (lookahead == 'o') ADVANCE(188);
      END_STATE();
    case 191:
      if (lookahead == 'p') ADVANCE(199);
      END_STATE();
    case 192:
      if (lookahead == 'r') ADVANCE(204);
      END_STATE();
    case 193:
      if (lookahead == 'r') ADVANCE(180);
      END_STATE();
    case 194:
      if (lookahead == 'r') ADVANCE(203);
      END_STATE();
    case 195:
      if (lookahead == 's') ADVANCE(173);
      END_STATE();
    case 196:
      if (lookahead == 's') ADVANCE(176);
      END_STATE();
    case 197:
      if (lookahead == 't') ADVANCE(179);
      END_STATE();
    case 198:
      if (lookahead == 't') ADVANCE(170);
      END_STATE();
    case 199:
      if (lookahead == 't') ADVANCE(181);
      END_STATE();
    case 200:
      if (lookahead == 'u') ADVANCE(198);
      END_STATE();
    case 201:
      if (lookahead == 'u') ADVANCE(177);
      END_STATE();
    case 202:
      if (lookahead == 'u') ADVANCE(184);
      END_STATE();
    case 203:
      if (lookahead == 'u') ADVANCE(175);
      END_STATE();
    case 204:
      if (lookahead == 'y') ADVANCE(213);
      END_STATE();
    case 205:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(230);
      END_STATE();
    case 206:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(229);
      END_STATE();
    case 207:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(230);
      END_STATE();
    case 208:
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(222);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_schema);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_query);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_mutation);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_subscription);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_string_value_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(221);
      if (lookahead == '"') ADVANCE(4);
      if (lookahead != 0) ADVANCE(222);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_string_value_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(222);
      if (lookahead == '"') ADVANCE(4);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(2);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_string_value_token2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(225);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(226);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_string_value_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(226);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_int_value);
      if (lookahead == '.') ADVANCE(206);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(205);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_int_value);
      if (lookahead == '.') ADVANCE(206);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(228);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_float_value);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(229);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_float_value);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(230);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_null_value);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_null_value);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_on);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_QUERY);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_MUTATION);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_SUBSCRIPTION);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_FIELD);
      if (lookahead == '_') ADVANCE(28);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_FRAGMENT_DEFINITION);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_FRAGMENT_SPREAD);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_INLINE_FRAGMENT);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_VARIABLE_DEFINITION);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_SCHEMA);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_SCALAR);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_OBJECT);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_FIELD_DEFINITION);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_ARGUMENT_DEFINITION);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_INTERFACE);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_UNION);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_ENUM);
      if (lookahead == '_') ADVANCE(160);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_ENUM_VALUE);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_INPUT_OBJECT);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_INPUT_FIELD_DEFINITION);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'l') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'l') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'l') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 's') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'u') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'u') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(271);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_comma);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 3},
  [49] = {.lex_state = 3},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 3},
  [52] = {.lex_state = 3},
  [53] = {.lex_state = 3},
  [54] = {.lex_state = 3},
  [55] = {.lex_state = 3},
  [56] = {.lex_state = 3},
  [57] = {.lex_state = 3},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 3},
  [60] = {.lex_state = 3},
  [61] = {.lex_state = 3},
  [62] = {.lex_state = 3},
  [63] = {.lex_state = 3},
  [64] = {.lex_state = 3},
  [65] = {.lex_state = 3},
  [66] = {.lex_state = 221},
  [67] = {.lex_state = 3},
  [68] = {.lex_state = 225},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 3},
  [72] = {.lex_state = 3},
  [73] = {.lex_state = 3},
  [74] = {.lex_state = 3},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 3},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 221},
  [81] = {.lex_state = 225},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_schema] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_query] = ACTIONS(1),
    [anon_sym_mutation] = ACTIONS(1),
    [anon_sym_subscription] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_int_value] = ACTIONS(1),
    [sym_float_value] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_null_value] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_on] = ACTIONS(1),
    [anon_sym_QUERY] = ACTIONS(1),
    [anon_sym_MUTATION] = ACTIONS(1),
    [anon_sym_SUBSCRIPTION] = ACTIONS(1),
    [anon_sym_FIELD] = ACTIONS(1),
    [anon_sym_FRAGMENT_DEFINITION] = ACTIONS(1),
    [anon_sym_FRAGMENT_SPREAD] = ACTIONS(1),
    [anon_sym_INLINE_FRAGMENT] = ACTIONS(1),
    [anon_sym_VARIABLE_DEFINITION] = ACTIONS(1),
    [anon_sym_SCHEMA] = ACTIONS(1),
    [anon_sym_SCALAR] = ACTIONS(1),
    [anon_sym_OBJECT] = ACTIONS(1),
    [anon_sym_FIELD_DEFINITION] = ACTIONS(1),
    [anon_sym_ARGUMENT_DEFINITION] = ACTIONS(1),
    [anon_sym_INTERFACE] = ACTIONS(1),
    [anon_sym_UNION] = ACTIONS(1),
    [anon_sym_ENUM] = ACTIONS(1),
    [anon_sym_ENUM_VALUE] = ACTIONS(1),
    [anon_sym_INPUT_OBJECT] = ACTIONS(1),
    [anon_sym_INPUT_FIELD_DEFINITION] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_comma] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(79),
    [sym_document] = STATE(76),
    [sym_definition] = STATE(18),
    [sym_executable_definition] = STATE(33),
    [sym_operation_definition] = STATE(32),
    [sym_operation_type] = STATE(55),
    [sym_selection_set] = STATE(31),
    [aux_sym_document_repeat1] = STATE(18),
    [anon_sym_LBRACE] = ACTIONS(3),
    [anon_sym_query] = ACTIONS(5),
    [anon_sym_mutation] = ACTIONS(5),
    [anon_sym_subscription] = ACTIONS(5),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 12,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(11), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      sym_float_value,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_RBRACK,
    ACTIONS(25), 1,
      sym_name,
    ACTIONS(15), 2,
      sym_int_value,
      sym_null_value,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(6), 2,
      sym_value,
      aux_sym_list_value_repeat1,
    STATE(17), 6,
      sym_variable,
      sym_string_value,
      sym_boolean_value,
      sym_enum_value,
      sym_list_value,
      sym_object_value,
  [45] = 12,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(11), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      sym_float_value,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      sym_name,
    ACTIONS(27), 1,
      anon_sym_RBRACK,
    ACTIONS(15), 2,
      sym_int_value,
      sym_null_value,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(6), 2,
      sym_value,
      aux_sym_list_value_repeat1,
    STATE(17), 6,
      sym_variable,
      sym_string_value,
      sym_boolean_value,
      sym_enum_value,
      sym_list_value,
      sym_object_value,
  [90] = 12,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(11), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      sym_float_value,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      sym_name,
    ACTIONS(29), 1,
      anon_sym_RBRACK,
    ACTIONS(15), 2,
      sym_int_value,
      sym_null_value,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(2), 2,
      sym_value,
      aux_sym_list_value_repeat1,
    STATE(17), 6,
      sym_variable,
      sym_string_value,
      sym_boolean_value,
      sym_enum_value,
      sym_list_value,
      sym_object_value,
  [135] = 12,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(11), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      sym_float_value,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      sym_name,
    ACTIONS(31), 1,
      anon_sym_RBRACK,
    ACTIONS(15), 2,
      sym_int_value,
      sym_null_value,
    ACTIONS(19), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(3), 2,
      sym_value,
      aux_sym_list_value_repeat1,
    STATE(17), 6,
      sym_variable,
      sym_string_value,
      sym_boolean_value,
      sym_enum_value,
      sym_list_value,
      sym_object_value,
  [180] = 12,
    ACTIONS(33), 1,
      anon_sym_LBRACE,
    ACTIONS(36), 1,
      anon_sym_DOLLAR,
    ACTIONS(39), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(42), 1,
      anon_sym_DQUOTE,
    ACTIONS(48), 1,
      sym_float_value,
    ACTIONS(54), 1,
      anon_sym_LBRACK,
    ACTIONS(57), 1,
      anon_sym_RBRACK,
    ACTIONS(59), 1,
      sym_name,
    ACTIONS(45), 2,
      sym_int_value,
      sym_null_value,
    ACTIONS(51), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(6), 2,
      sym_value,
      aux_sym_list_value_repeat1,
    STATE(17), 6,
      sym_variable,
      sym_string_value,
      sym_boolean_value,
      sym_enum_value,
      sym_list_value,
      sym_object_value,
  [225] = 11,
    ACTIONS(62), 1,
      anon_sym_LBRACE,
    ACTIONS(64), 1,
      anon_sym_DOLLAR,
    ACTIONS(66), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(68), 1,
      anon_sym_DQUOTE,
    ACTIONS(72), 1,
      sym_float_value,
    ACTIONS(76), 1,
      anon_sym_LBRACK,
    ACTIONS(78), 1,
      sym_name,
    STATE(59), 1,
      sym_value,
    ACTIONS(70), 2,
      sym_int_value,
      sym_null_value,
    ACTIONS(74), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(44), 6,
      sym_variable,
      sym_string_value,
      sym_boolean_value,
      sym_enum_value,
      sym_list_value,
      sym_object_value,
  [266] = 11,
    ACTIONS(62), 1,
      anon_sym_LBRACE,
    ACTIONS(64), 1,
      anon_sym_DOLLAR,
    ACTIONS(66), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(68), 1,
      anon_sym_DQUOTE,
    ACTIONS(72), 1,
      sym_float_value,
    ACTIONS(76), 1,
      anon_sym_LBRACK,
    ACTIONS(78), 1,
      sym_name,
    STATE(62), 1,
      sym_value,
    ACTIONS(70), 2,
      sym_int_value,
      sym_null_value,
    ACTIONS(74), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(44), 6,
      sym_variable,
      sym_string_value,
      sym_boolean_value,
      sym_enum_value,
      sym_list_value,
      sym_object_value,
  [307] = 2,
    ACTIONS(80), 6,
      anon_sym_LBRACE,
      anon_sym_DOLLAR,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      sym_float_value,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
    ACTIONS(82), 6,
      anon_sym_DQUOTE,
      sym_int_value,
      anon_sym_true,
      anon_sym_false,
      sym_null_value,
      sym_name,
  [324] = 2,
    ACTIONS(84), 6,
      anon_sym_LBRACE,
      anon_sym_DOLLAR,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      sym_float_value,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
    ACTIONS(86), 6,
      anon_sym_DQUOTE,
      sym_int_value,
      anon_sym_true,
      anon_sym_false,
      sym_null_value,
      sym_name,
  [341] = 2,
    ACTIONS(88), 6,
      anon_sym_LBRACE,
      anon_sym_DOLLAR,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      sym_float_value,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
    ACTIONS(90), 6,
      anon_sym_DQUOTE,
      sym_int_value,
      anon_sym_true,
      anon_sym_false,
      sym_null_value,
      sym_name,
  [358] = 2,
    ACTIONS(92), 6,
      anon_sym_LBRACE,
      anon_sym_DOLLAR,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      sym_float_value,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
    ACTIONS(94), 6,
      anon_sym_DQUOTE,
      sym_int_value,
      anon_sym_true,
      anon_sym_false,
      sym_null_value,
      sym_name,
  [375] = 2,
    ACTIONS(96), 6,
      anon_sym_LBRACE,
      anon_sym_DOLLAR,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      sym_float_value,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
    ACTIONS(98), 6,
      anon_sym_DQUOTE,
      sym_int_value,
      anon_sym_true,
      anon_sym_false,
      sym_null_value,
      sym_name,
  [392] = 2,
    ACTIONS(100), 6,
      anon_sym_LBRACE,
      anon_sym_DOLLAR,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      sym_float_value,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
    ACTIONS(102), 6,
      anon_sym_DQUOTE,
      sym_int_value,
      anon_sym_true,
      anon_sym_false,
      sym_null_value,
      sym_name,
  [409] = 2,
    ACTIONS(104), 6,
      anon_sym_LBRACE,
      anon_sym_DOLLAR,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      sym_float_value,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
    ACTIONS(106), 6,
      anon_sym_DQUOTE,
      sym_int_value,
      anon_sym_true,
      anon_sym_false,
      sym_null_value,
      sym_name,
  [426] = 2,
    ACTIONS(108), 6,
      anon_sym_LBRACE,
      anon_sym_DOLLAR,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      sym_float_value,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
    ACTIONS(110), 6,
      anon_sym_DQUOTE,
      sym_int_value,
      anon_sym_true,
      anon_sym_false,
      sym_null_value,
      sym_name,
  [443] = 2,
    ACTIONS(112), 6,
      anon_sym_LBRACE,
      anon_sym_DOLLAR,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      sym_float_value,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
    ACTIONS(114), 6,
      anon_sym_DQUOTE,
      sym_int_value,
      anon_sym_true,
      anon_sym_false,
      sym_null_value,
      sym_name,
  [460] = 8,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    ACTIONS(116), 1,
      ts_builtin_sym_end,
    STATE(31), 1,
      sym_selection_set,
    STATE(32), 1,
      sym_operation_definition,
    STATE(33), 1,
      sym_executable_definition,
    STATE(55), 1,
      sym_operation_type,
    STATE(19), 2,
      sym_definition,
      aux_sym_document_repeat1,
    ACTIONS(5), 3,
      anon_sym_query,
      anon_sym_mutation,
      anon_sym_subscription,
  [488] = 8,
    ACTIONS(118), 1,
      ts_builtin_sym_end,
    ACTIONS(120), 1,
      anon_sym_LBRACE,
    STATE(31), 1,
      sym_selection_set,
    STATE(32), 1,
      sym_operation_definition,
    STATE(33), 1,
      sym_executable_definition,
    STATE(55), 1,
      sym_operation_type,
    STATE(19), 2,
      sym_definition,
      aux_sym_document_repeat1,
    ACTIONS(123), 3,
      anon_sym_query,
      anon_sym_mutation,
      anon_sym_subscription,
  [516] = 6,
    ACTIONS(126), 1,
      anon_sym_LBRACE,
    ACTIONS(130), 1,
      anon_sym_COLON,
    ACTIONS(132), 1,
      anon_sym_LPAREN,
    STATE(43), 1,
      sym_arguments,
    STATE(56), 1,
      sym_selection_set,
    ACTIONS(128), 2,
      anon_sym_RBRACE,
      sym_name,
  [536] = 5,
    ACTIONS(134), 1,
      anon_sym_RBRACE,
    ACTIONS(136), 1,
      sym_name,
    STATE(57), 1,
      sym_field,
    STATE(73), 1,
      sym_alias,
    STATE(26), 2,
      sym_selection,
      aux_sym_selection_set_repeat1,
  [553] = 5,
    ACTIONS(136), 1,
      sym_name,
    ACTIONS(138), 1,
      anon_sym_RBRACE,
    STATE(57), 1,
      sym_field,
    STATE(73), 1,
      sym_alias,
    STATE(25), 2,
      sym_selection,
      aux_sym_selection_set_repeat1,
  [570] = 5,
    ACTIONS(126), 1,
      anon_sym_LBRACE,
    ACTIONS(132), 1,
      anon_sym_LPAREN,
    STATE(40), 1,
      sym_arguments,
    STATE(63), 1,
      sym_selection_set,
    ACTIONS(140), 2,
      anon_sym_RBRACE,
      sym_name,
  [587] = 5,
    ACTIONS(142), 1,
      anon_sym_RBRACE,
    ACTIONS(144), 1,
      sym_name,
    STATE(57), 1,
      sym_field,
    STATE(73), 1,
      sym_alias,
    STATE(24), 2,
      sym_selection,
      aux_sym_selection_set_repeat1,
  [604] = 5,
    ACTIONS(136), 1,
      sym_name,
    ACTIONS(147), 1,
      anon_sym_RBRACE,
    STATE(57), 1,
      sym_field,
    STATE(73), 1,
      sym_alias,
    STATE(24), 2,
      sym_selection,
      aux_sym_selection_set_repeat1,
  [621] = 5,
    ACTIONS(136), 1,
      sym_name,
    ACTIONS(149), 1,
      anon_sym_RBRACE,
    STATE(57), 1,
      sym_field,
    STATE(73), 1,
      sym_alias,
    STATE(24), 2,
      sym_selection,
      aux_sym_selection_set_repeat1,
  [638] = 1,
    ACTIONS(151), 5,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_query,
      anon_sym_mutation,
      anon_sym_subscription,
  [646] = 1,
    ACTIONS(153), 5,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_query,
      anon_sym_mutation,
      anon_sym_subscription,
  [654] = 1,
    ACTIONS(155), 5,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_query,
      anon_sym_mutation,
      anon_sym_subscription,
  [662] = 1,
    ACTIONS(157), 5,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_query,
      anon_sym_mutation,
      anon_sym_subscription,
  [670] = 1,
    ACTIONS(159), 5,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_query,
      anon_sym_mutation,
      anon_sym_subscription,
  [678] = 1,
    ACTIONS(161), 5,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_query,
      anon_sym_mutation,
      anon_sym_subscription,
  [686] = 1,
    ACTIONS(163), 5,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_query,
      anon_sym_mutation,
      anon_sym_subscription,
  [694] = 3,
    ACTIONS(165), 1,
      anon_sym_RPAREN,
    ACTIONS(167), 1,
      sym_name,
    STATE(38), 2,
      sym_argument,
      aux_sym_arguments_repeat1,
  [705] = 3,
    ACTIONS(169), 1,
      anon_sym_RBRACE,
    ACTIONS(171), 1,
      sym_name,
    STATE(41), 2,
      sym_object_field,
      aux_sym_object_value_repeat1,
  [716] = 3,
    ACTIONS(171), 1,
      sym_name,
    ACTIONS(173), 1,
      anon_sym_RBRACE,
    STATE(35), 2,
      sym_object_field,
      aux_sym_object_value_repeat1,
  [727] = 3,
    ACTIONS(171), 1,
      sym_name,
    ACTIONS(175), 1,
      anon_sym_RBRACE,
    STATE(39), 2,
      sym_object_field,
      aux_sym_object_value_repeat1,
  [738] = 3,
    ACTIONS(177), 1,
      anon_sym_RPAREN,
    ACTIONS(179), 1,
      sym_name,
    STATE(38), 2,
      sym_argument,
      aux_sym_arguments_repeat1,
  [749] = 3,
    ACTIONS(171), 1,
      sym_name,
    ACTIONS(182), 1,
      anon_sym_RBRACE,
    STATE(41), 2,
      sym_object_field,
      aux_sym_object_value_repeat1,
  [760] = 3,
    ACTIONS(126), 1,
      anon_sym_LBRACE,
    STATE(65), 1,
      sym_selection_set,
    ACTIONS(184), 2,
      anon_sym_RBRACE,
      sym_name,
  [771] = 3,
    ACTIONS(186), 1,
      anon_sym_RBRACE,
    ACTIONS(188), 1,
      sym_name,
    STATE(41), 2,
      sym_object_field,
      aux_sym_object_value_repeat1,
  [782] = 3,
    ACTIONS(167), 1,
      sym_name,
    ACTIONS(191), 1,
      anon_sym_RPAREN,
    STATE(34), 2,
      sym_argument,
      aux_sym_arguments_repeat1,
  [793] = 3,
    ACTIONS(126), 1,
      anon_sym_LBRACE,
    STATE(63), 1,
      sym_selection_set,
    ACTIONS(140), 2,
      anon_sym_RBRACE,
      sym_name,
  [804] = 1,
    ACTIONS(112), 3,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      sym_name,
  [810] = 1,
    ACTIONS(100), 3,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      sym_name,
  [816] = 1,
    ACTIONS(88), 3,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      sym_name,
  [822] = 1,
    ACTIONS(104), 3,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      sym_name,
  [828] = 1,
    ACTIONS(193), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_name,
  [834] = 1,
    ACTIONS(80), 3,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      sym_name,
  [840] = 1,
    ACTIONS(96), 3,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      sym_name,
  [846] = 1,
    ACTIONS(195), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_name,
  [852] = 1,
    ACTIONS(92), 3,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      sym_name,
  [858] = 1,
    ACTIONS(108), 3,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      sym_name,
  [864] = 1,
    ACTIONS(84), 3,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      sym_name,
  [870] = 3,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    ACTIONS(197), 1,
      sym_name,
    STATE(29), 1,
      sym_selection_set,
  [880] = 1,
    ACTIONS(140), 2,
      anon_sym_RBRACE,
      sym_name,
  [885] = 1,
    ACTIONS(199), 2,
      anon_sym_RBRACE,
      sym_name,
  [890] = 2,
    ACTIONS(3), 1,
      anon_sym_LBRACE,
    STATE(28), 1,
      sym_selection_set,
  [897] = 1,
    ACTIONS(201), 2,
      anon_sym_RBRACE,
      sym_name,
  [902] = 1,
    ACTIONS(157), 2,
      anon_sym_RBRACE,
      sym_name,
  [907] = 1,
    ACTIONS(151), 2,
      anon_sym_RBRACE,
      sym_name,
  [912] = 1,
    ACTIONS(203), 2,
      anon_sym_RPAREN,
      sym_name,
  [917] = 1,
    ACTIONS(184), 2,
      anon_sym_RBRACE,
      sym_name,
  [922] = 1,
    ACTIONS(205), 2,
      anon_sym_LBRACE,
      sym_name,
  [927] = 1,
    ACTIONS(207), 2,
      anon_sym_RBRACE,
      sym_name,
  [932] = 1,
    ACTIONS(209), 1,
      aux_sym_string_value_token1,
  [936] = 1,
    ACTIONS(211), 1,
      sym_name,
  [940] = 1,
    ACTIONS(213), 1,
      aux_sym_string_value_token2,
  [944] = 1,
    ACTIONS(215), 1,
      anon_sym_COLON,
  [948] = 1,
    ACTIONS(217), 1,
      anon_sym_COLON,
  [952] = 1,
    ACTIONS(219), 1,
      sym_name,
  [956] = 1,
    ACTIONS(221), 1,
      anon_sym_DQUOTE,
  [960] = 1,
    ACTIONS(223), 1,
      sym_name,
  [964] = 1,
    ACTIONS(225), 1,
      sym_name,
  [968] = 1,
    ACTIONS(221), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [972] = 1,
    ACTIONS(227), 1,
      ts_builtin_sym_end,
  [976] = 1,
    ACTIONS(229), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [980] = 1,
    ACTIONS(229), 1,
      anon_sym_DQUOTE,
  [984] = 1,
    ACTIONS(231), 1,
      ts_builtin_sym_end,
  [988] = 1,
    ACTIONS(233), 1,
      aux_sym_string_value_token1,
  [992] = 1,
    ACTIONS(235), 1,
      aux_sym_string_value_token2,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 45,
  [SMALL_STATE(4)] = 90,
  [SMALL_STATE(5)] = 135,
  [SMALL_STATE(6)] = 180,
  [SMALL_STATE(7)] = 225,
  [SMALL_STATE(8)] = 266,
  [SMALL_STATE(9)] = 307,
  [SMALL_STATE(10)] = 324,
  [SMALL_STATE(11)] = 341,
  [SMALL_STATE(12)] = 358,
  [SMALL_STATE(13)] = 375,
  [SMALL_STATE(14)] = 392,
  [SMALL_STATE(15)] = 409,
  [SMALL_STATE(16)] = 426,
  [SMALL_STATE(17)] = 443,
  [SMALL_STATE(18)] = 460,
  [SMALL_STATE(19)] = 488,
  [SMALL_STATE(20)] = 516,
  [SMALL_STATE(21)] = 536,
  [SMALL_STATE(22)] = 553,
  [SMALL_STATE(23)] = 570,
  [SMALL_STATE(24)] = 587,
  [SMALL_STATE(25)] = 604,
  [SMALL_STATE(26)] = 621,
  [SMALL_STATE(27)] = 638,
  [SMALL_STATE(28)] = 646,
  [SMALL_STATE(29)] = 654,
  [SMALL_STATE(30)] = 662,
  [SMALL_STATE(31)] = 670,
  [SMALL_STATE(32)] = 678,
  [SMALL_STATE(33)] = 686,
  [SMALL_STATE(34)] = 694,
  [SMALL_STATE(35)] = 705,
  [SMALL_STATE(36)] = 716,
  [SMALL_STATE(37)] = 727,
  [SMALL_STATE(38)] = 738,
  [SMALL_STATE(39)] = 749,
  [SMALL_STATE(40)] = 760,
  [SMALL_STATE(41)] = 771,
  [SMALL_STATE(42)] = 782,
  [SMALL_STATE(43)] = 793,
  [SMALL_STATE(44)] = 804,
  [SMALL_STATE(45)] = 810,
  [SMALL_STATE(46)] = 816,
  [SMALL_STATE(47)] = 822,
  [SMALL_STATE(48)] = 828,
  [SMALL_STATE(49)] = 834,
  [SMALL_STATE(50)] = 840,
  [SMALL_STATE(51)] = 846,
  [SMALL_STATE(52)] = 852,
  [SMALL_STATE(53)] = 858,
  [SMALL_STATE(54)] = 864,
  [SMALL_STATE(55)] = 870,
  [SMALL_STATE(56)] = 880,
  [SMALL_STATE(57)] = 885,
  [SMALL_STATE(58)] = 890,
  [SMALL_STATE(59)] = 897,
  [SMALL_STATE(60)] = 902,
  [SMALL_STATE(61)] = 907,
  [SMALL_STATE(62)] = 912,
  [SMALL_STATE(63)] = 917,
  [SMALL_STATE(64)] = 922,
  [SMALL_STATE(65)] = 927,
  [SMALL_STATE(66)] = 932,
  [SMALL_STATE(67)] = 936,
  [SMALL_STATE(68)] = 940,
  [SMALL_STATE(69)] = 944,
  [SMALL_STATE(70)] = 948,
  [SMALL_STATE(71)] = 952,
  [SMALL_STATE(72)] = 956,
  [SMALL_STATE(73)] = 960,
  [SMALL_STATE(74)] = 964,
  [SMALL_STATE(75)] = 968,
  [SMALL_STATE(76)] = 972,
  [SMALL_STATE(77)] = 976,
  [SMALL_STATE(78)] = 980,
  [SMALL_STATE(79)] = 984,
  [SMALL_STATE(80)] = 988,
  [SMALL_STATE(81)] = 992,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_value_repeat1, 2), SHIFT_REPEAT(37),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_value_repeat1, 2), SHIFT_REPEAT(74),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_value_repeat1, 2), SHIFT_REPEAT(80),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_value_repeat1, 2), SHIFT_REPEAT(81),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_value_repeat1, 2), SHIFT_REPEAT(17),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_value_repeat1, 2), SHIFT_REPEAT(17),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_value_repeat1, 2), SHIFT_REPEAT(10),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_value_repeat1, 2), SHIFT_REPEAT(5),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_value_repeat1, 2),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_value_repeat1, 2), SHIFT_REPEAT(9),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_value, 1),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_value, 1),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_value, 1),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_value, 1),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 2),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 2),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_value, 3),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_value, 3),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_value, 3),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_value, 3),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_value, 2),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object_value, 2),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_value, 2),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_value, 2),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_value, 3),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_value, 3),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(22),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(64),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 1),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 2),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_selection_set_repeat1, 2),
  [144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_selection_set_repeat1, 2), SHIFT_REPEAT(20),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selection_set, 3),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operation_definition, 3),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operation_definition, 2),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selection_set, 2),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operation_definition, 1),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_executable_definition, 1),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 1),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [179] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(70),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 3),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_value_repeat1, 2),
  [188] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_value_repeat1, 2), SHIFT_REPEAT(69),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 3),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selection, 1),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_field, 3),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 3),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operation_type, 1),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 4),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias, 2),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [231] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_graphql(void) {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const uint16_t *)ts_parse_table,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .field_count = FIELD_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .state_count = STATE_COUNT,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif

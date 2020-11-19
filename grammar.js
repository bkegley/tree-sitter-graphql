module.exports = grammar({
  name: 'graphql',
  rules: {
    source_file: $ => $.document,
    document: $ => repeat1($.definition),
    definition: $ => choice(
      $.executable_definition,
      //$.type_system_definition,
      //$.type_system_extension
    ),
    executable_definition: $ => choice(
      $.operation_definition,
      //$.fragment_definition
    ),
    type_system_definition: $ => choice(
      $.schema_definition,
      //$.type_definition,
      //$.directive_definition
    )
    schema_definition: $ => seq(
      optional($.description),
      'schema',
      //optional($.directives),
      '{',
      //$.root_operation_type_definition,
      '}'
    )
    type_definition: $ => 
    operation_definition: $ => choice(
      $.selection_set, 
      seq(
        $.operation_type,
        optional($.name),
        // variables
        // directives
        $.selection_set
      ),
    ),
    operation_type: $ => choice('query', 'mutation', 'subscription'),
    selection_set: $ => seq('{', repeat($.selection), '}'),
    selection: $ => choice(
      $.field, 
      //$.fragment_spread, 
      //$.inline_fragment
    ),
    field: $ => seq(
      optional($.alias),
      $.name,
      optional($.arguments),
      //optional($.directive),
      optional($.selection_set)
    ),
    field_defintion: $ => repeat($.field),
    alias: $ => seq($.name, ':'),
    arguments: $ => seq('(', repeat($.argument), ')'),
    argument: $ => seq($.name, ':', $.value),
    value: $ => choice(
      $.variable,
      $.string_value,
      $.int_value,
      $.float_value,
      $.boolean_value,
      $.null_value,
      $.enum_value,
      $.list_value,
      $.object_value
    ),
    variable: $ => seq('$', $.name),
    string_value: $ => choice(
      seq('"""', /([^"]|\n|""?[^"])*/, '"""'),
      seq('"', /[^"\\\n]*/, '"')
    ), 
    int_value: $ => /-?(0|[1-9][0-9]*)/,
    float_value: $ => token(
      seq(
        /-?(0|[1-9][0-9]*)/,
        choice(
          /\.[0-9]+/,
          /(e|E)(\+|-)?[0-9]+/,
          seq(/\.[0-9]+/, /(e|E)(\+|-)?[0-9]+/)
        )
      )
    ),
    boolean_value: $ => choice('true', 'false'),
    null_value: $ => 'null',
    enum_value: $ => $.name,
    list_value: $ =>  seq('[', repeat($.value), ']'),
    object_value: $ => seq('{', repeat($.object_field),'}'),
    object_field: $ => seq($.name, ':', $.value),
    directive_definition: $ => seq('@', $.name, 'on', repeat($.directive_locations)),
    directive_locations: $ => choice($.executable_directive_location, $.type_system_directive_location),
    executable_directive_location: $ => choice(
      'QUERY',
      'MUTATION',
      'SUBSCRIPTION',
      'FIELD',
      'FRAGMENT_DEFINITION',
      'FRAGMENT_SPREAD',
      'INLINE_FRAGMENT','VARIABLE_DEFINITION'
    ),
    type_system_directive_location: $ => choice(
      'SCHEMA',
      'SCALAR', 
      'OBJECT',
      'FIELD_DEFINITION',
      'ARGUMENT_DEFINITION',
      'INTERFACE',
      'UNION',
      'ENUM',
      'ENUM_VALUE',
      'INPUT_OBJECT',
      'INPUT_FIELD_DEFINITION'
    ),
    directive: $ => seq('@'),
    name: $ => /[_A-Za-z][_0-9A-Za-z]*/,
    //type_system_definition: $ => '',
    //type_system_extension: $ => '',
    //fragment_definition: $ => '',
    //enum_definition: $ => seq('enum', $.name, '{', $.field_definition, '}')
    comment: $ => token(seq('#', /.*/)),
    comma: $ => ',',
  }
})

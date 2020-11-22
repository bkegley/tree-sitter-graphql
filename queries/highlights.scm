(description) @comment

(name) @variable

(fields_definition (field_definition (name) @keyword))

[
  "QUERY"
  "MUTATION"
  "SUBSCRIPTION"
  "FIELD"
  "FRAGMENT_DEFINITION"
  "FRAGMENT_SPREAD"
  "INLINE_FRAGMENT"
  "VARIABLE_DEFINITION"
  "SCHEMA"
  "SCALAR"
  "OBJECT"
  "FIELD_DEFINITION"
  "ARGUMENT_DEFINITION"
  "INTERFACE"
  "UNION"
  "ENUM"
  "ENUM_VALUE"
  "INPUT_OBJECT"
  "INPUT_FIELD_DEFINITION"
] @type.builtin

; Tokens
; ------


[
 "|"
 "&"
] @punctuation.delimiter

[
 "="
] @operator

[
 "("
 ")"
 "["
 "]"
 "{"
 "}"
] @punctuation.bracket

[
  "scalar"
  "type"
  "interface"
  "union"
  "enum"
  "input"
  "extend"
  "directive"
  "on"
] @keyword

local Query = require'vim.treesitter.query'

local M = {}


vim.treesitter.require_language('graphql', './build/parser.so')

M.print_something = function()
  print('Printing from the module')
end

local get_definition_sets = function(root)
  local query_string = '((fields_definition) @fields_definition)'
  local fields_def = vim.treesitter.parse_query('graphql', query_string)

  local definition_sets = {}
  for id, node in fields_def:iter_captures(root, 0, 0, -1) do
    table.insert(definition_sets, node)
  end
  return definition_sets
end

local get_field_names = function(root, row1, row2)
  local query_string = '(field_definition (name) @name)'
  local name_query = vim.treesitter.parse_query('graphql', query_string)

  for pattern, match in name_query:iter_matches(root, 0, row1, row2) do
    for inner_id, inner_node in pairs(match) do
      --local name = name_query.captures[inner_id]
      local node_text = Query.get_node_text(inner_node, 0)
      print(node_text)
    end
  end
end

M.execute = function()
  local parser = vim.treesitter.get_parser(0, 'graphql')
  local tree = parser:parse()
  local root = tree:root()
  local definitions_sets = get_definition_sets(root)
  for k, node in pairs(definitions_sets) do
    local row1, _, row2, _ = node:range()
    get_field_names(root, row1, row2)
  end
end

M.reload = function()
  print('Reloading module')
  require'plenary.reload'.reload_module('lua.gql.init')
end

return M

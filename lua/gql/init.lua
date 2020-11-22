local M = {}

local query_string = '(name) @hello'

M.print_something = function()
  print('Printing from the module')
end

M.execute = function()
  local query = vim.treesitter.parse_query("graphql", query_string)
  print(query.captures)
  for k,v in pairs(query.captures) do
    print(string.format('k: %s - v %s', k, v))
  end
end

M.reload = function()
  print('Reloading module')
  require'plenary.reload'.reload_module('lua.gql.init')
end

return M

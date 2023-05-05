local M = {}

function M.setup()
	local consts = require(table.concat({ DIRECTORY, "util" })).setup({
		directory = table.concat({ DIRECTORY, "config/consts/" }),
		files = true,
	})

	for i, vim_table in ipairs({ "g", "opt" }) do
		for key, value in pairs(consts[i * 2 + 1].assign) do
			vim[vim_table][key] = value
		end

		for key, value in pairs(consts[i * 2 + 1].append) do
			vim[vim_table][key]:append({ value })
		end
	end

	for i, fn in ipairs({ vim.api.nvim_create_autocmd, vim.cmd, vim.keymap.set }) do
		for _, table in ipairs(consts[2 ^ (i - 1)]) do
			fn(unpack(table))
		end
	end
end

return M

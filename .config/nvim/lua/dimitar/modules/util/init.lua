local M = {}

function M.setup(opts)
	if opts then
		local modules, regex = {}, table.concat({ "v:val ", opts.files and "=" or "!", "~ '.lua'" })

		for _, module in
			ipairs(vim.fn.readdir(table.concat({ vim.fn.stdpath("config"), "/lua/", opts.directory }), regex))
		do
			table.insert(modules, require(opts.directory .. module:gsub("%.lua$", "")))
		end

		return modules
	end
end

return M

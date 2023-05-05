local M = {}

M.manager_name = "lazy"
M.filename = table.concat({ M.manager_name, ".nvim" })
M.filepath = table.concat({ vim.fn.stdpath("data"), "/", M.manager_name, "/", M.filename })

function M.setup()
	if not vim.loop.fs_stat(M.filepath) then
		vim.fn.system({
			"git",
			"clone",
			"--filter=blob:none",
			table.concat({ "https://github.com/folke/", M.filename, ".git" }),
			"--branch=stable",
			M.filepath,
		})
	end

	vim.opt.rtp:prepend(M.filepath)
	require(M.manager_name).setup(table.concat({ DIRECTORY, "/manager/plugins" }))
end

return M

local M = {}

function M.setup()
	local user_environment = { "USER" }

	if vim.loop.os_uname().sysname == "Windows" then
		table.insert(user_environment, "PROFILE")
	end

	USER = vim.env[table.concat(user_environment)]
	require(USER).setup()
end

return M

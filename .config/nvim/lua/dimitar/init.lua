local M = {}

function M.setup()
	DIRECTORY = table.concat({ USER, "/modules/" })

	for _, module in
		ipairs(require(table.concat({ DIRECTORY, "util" })).setup({ directory = DIRECTORY, files = false }))
	do
		module.setup()
	end
end

return M

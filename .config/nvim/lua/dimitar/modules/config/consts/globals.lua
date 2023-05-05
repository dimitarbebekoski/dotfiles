local M, netrw =
	{
		assign = { mapleader = " " },
		append = {},
	}, { keys = { "keepdir", "browse_split", "winsize", "banner", "liststyle" }, values = { "0", "4", "10", "0", "3" } }

if #netrw.keys ~= #netrw.values then
	return M
end

for i = 1, #netrw.keys do
	netrw.keys[i] = "netrw_" .. netrw.keys[i]
end

for i = 1, #netrw.keys do
	M.assign[netrw.keys[i]] = netrw.values[i]
end

return M

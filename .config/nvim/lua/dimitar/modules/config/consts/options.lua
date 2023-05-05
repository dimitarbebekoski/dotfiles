local tab_spaces = 2

return {
	assign = {
		nu = true,
		ts = tab_spaces,
		sts = tab_spaces,
		sw = tab_spaces,
		expandtab = true,
		smartindent = true,

		swapfile = false,
		backup = false,
		undodir = vim.fn.stdpath("config") .. "/undodir",
		undofile = true,

		termguicolors = true,
		scrolloff = 8,
		signcolumn = "yes",

		mouse = "a",
	},
	append = {
		clipboard = "unnamedplus",
	},
}

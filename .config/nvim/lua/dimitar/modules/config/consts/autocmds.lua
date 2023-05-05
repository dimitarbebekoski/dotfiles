local augroup = vim.api.nvim_create_augroup("vimrc", {})

return {
	{
		{ "VimEnter" },
		{
			pattern = "*",
			group = augroup,
			command = ":Vexplore %:p:h | wincmd p",
		},
	},
	{
		{ "FileType" },
		{
			pattern = { "bash", "sh" },
			group = augroup,
			callback = function()
				vim.cmd("set filetype=bash")
				local bash_lsp = "bash-language-server"
				vim.lsp.start({ name = bash_lsp, cmd = { bash_lsp, "start" } })
			end,
		},
	},
	{
		{ "FileType" },
		{
			pattern = "lua",
			group = augroup,
			callback = function()
				local lua_lsp = "lua-language-server"

				vim.o.colorcolumn = "120"
				vim.o.equalprg = "stylua -"

				vim.lsp.start({
					name = lua_lsp,
					cmd = { lua_lsp },
					settings = {
						Lua = {
							runtime = { version = "LuaJIT" },
							diagnostics = { globals = { "vim" } },
							workspace = { library = vim.api.nvim_get_runtime_file("", true), checkThirdParty = false },
							telemetry = { enable = false },
						},
					},
				})
			end,
		},
	},
	{
		{ "FileType" },
		{
			pattern = { "h", "c", "hpp", "cpp" },
			group = augroup,
			callback = function()
				local cxx_lsp = "clangd"

				vim.o.colorcolumn = "80"
				vim.o.equalprg = "clang-format"

				vim.lsp.start({
					name = cxx_lsp,
					cmd = { cxx_lsp },
				})
			end,
		},
	},
	{
		{ "BufEnter", "BufWinEnter", "VimEnter" },
		{
			pattern = { "bash*", "profile*" },
			group = augroup,
			command = "set filetype=bash",
		},
	},
	{
		{ "BufEnter", "BufWinEnter", "VimEnter" },
		{
			pattern = { os.getenv("HOME") .. "/.config/sway/*/*/*", os.getenv("HOME") .. "/.config/sway/*/*" },
			group = augroup,
			command = "set filetype=i3config",
		},
	},
}

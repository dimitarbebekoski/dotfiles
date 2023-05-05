return {
	"nvim-treesitter/nvim-treesitter",
	build = ":TSUpdate",
	opts = {
		highlight = { enable = true },
		--additional_vim_regex_highlighting = false },
		ensure_installed = { "c", "cpp", "vim", "lua", "bash" },
	},
	config = function(_, opts)
		require("nvim-treesitter.configs").setup(opts)
	end,
}

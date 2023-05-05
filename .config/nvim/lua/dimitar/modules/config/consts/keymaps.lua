return {
	{ "n", "<F2>", ":Lexplore %:p:h<CR>" },
	{ "n", "<F3>", "gg=G``" },
	{ "n", "<F4>", ":wa<Bar>:!make <Bar><Bar> make -C .. <Bar><Bar> make -C ../.. <CR>" },
  { "n", "<F5>", "21<C-w>>" },
	{ "n", "<F6>", ":%s///g<Left><Left><Left>" },
	{ "n", "<F7>", vim.lsp.buf.rename },
	{ "n", "<F8>", vim.lsp.buf.hover },
	{ "n", "<F9>", vim.lsp.buf.definition },
	{ "n", "<F10>", vim.lsp.buf.type_definition },
	{ "n", "<F11>", vim.lsp.buf.implementation },

	{ "n", "<F57>", ":set filetype=i3config<CR>" },
	{ "n", "<F58>", ":w<CR>:source %<CR>" },
	{ "n", "<F59>", ":NERDTreeFocus<CR>" },
	{ "n", "<F60>", ":NERDTreeToggle<Bar>wincmd p<CR>" },

	{ "n", "<F12>", ":echo mapleader<CR>" },
	{ "n", "<Leader><F12>", ":echo 'bravo'<CR>" },
}

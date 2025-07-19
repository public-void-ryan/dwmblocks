// Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/ /*Command*/ /*Update Interval*/ /*Update Signal*/
	{"", "cat /tmp/recordingicon 2>/dev/null", 0, 9},
	{"", "sb-spotify", 1, 14},
//	{"", "sb-systemstats", 1, 11},
//	{"", "sb-price", 60, 6},
//	{"", "sb-weather", 360, 12},
	{"", "sb-pacpackages", 360, 8},
	{"", "sb-volume", 0, 10},
	{"", "sb-timer", 0, 3},
//	{"", "sb-nightlight", 1, 11},
//	{"", "sb-torrent", 5, 7},
	{"", "sb-bluetooth", 5, 30},
	{"", "sb-battery", 5, 5},
//	{"", "sb-adguard", 1, 29},
//	{"", "sb-vpn", 1, 20},
	{"", "sb-clock", 1, 1},
//	{"", "sb-internet", 5, 4},
};

// Sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char *delim = " 󰤃 ";

// Have dwmblocks automatically recompile and run when you edit this file in
// vim with the following line in your vimrc/init.vim:

// autocmd BufWritePost ~/.local/src/dwmblocks/config.h !cd ~/.local/src/dwmblocks/; sudo make install && { killall -q dwmblocks;setsid dwmblocks & }

//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	{" 🔊 ", "~/.config/suckless/dwmblocks-distrotube/scripts/volume", 1, 10},
	{"  battery", "~/.config/suckless/dwmblocks-distrotube/scripts/battery", 2, 0},

	{" 🕑 ", "~/.config/suckless/dwmblocks-distrotube/scripts/clock", 60, 0},
};
//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = '|';

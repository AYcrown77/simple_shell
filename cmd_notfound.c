#include "main.h"

/**
 * cmd_not_found - displays an error message when command can't be found
 * @arg: array of arguments entered by the user
 * @count: no of time shell has been executed
 *
 * Return: exit status
 */

int cmd_not_found(char **arg, int count)
{
	char *imode_shellname = "vsh";
	char *non_imode_shellname = "./vsh";

	if (isatty(stdin_fileno))
		write(2, imode_shellname, 3);
	else
	{
		write(2, non_imode_shellname, 5);
	}
	write(2, ": ", 2);
	print_num(count);
	write(2, ": ", 2);
	write(2, arg[0], _strlen(arg[0]));
	write(2, ": not found\n", 12);
	return (127);
}

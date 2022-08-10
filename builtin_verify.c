#include "main.h"

/**
 * verify_bltin - to verify if the input is a builtin
 * @args: points to the array of arguments
 * @exit_status: exit status
 *
 * Return: 0 if the input is a builtin otherwise return -1
 */

int verify_bltin(char **args, int exit_status)
{
	char *bltin[2] = {"exit", "env"};
	int i = 0;

	while (i < 2)
	{
		if (strcmpr(args[0], bltin[i]) == 0)
			break;
		i++;
	}
	if (i == 2)
		return (-1);

	if (strcmpr(bltin[i], "exit") == 0)
	{
		free(args[0]);
		exit(exit_status);
	}

	if (strcmpr(bltin[i], "env") == 0)
	{
		if (environ == NULL)
			return (0);
		write(1, environ, 1000);
	}
	return (0);
}

#include "main.h"

/**
 * path_verify - check if the first command can be executed
 * @args: array of user entries
 *
 * Return: -1 if the file does not exist and 0 is successful
 */

int path_verify(char **args)
{
	char *global_dup = NULL;
	char *global_path = NULL;
	char *cmd_path = NULL;
	char *dir_path = NULL;
	char *test_cph[121];
	int exit_status = -1, i = 0;

	global_path = get_environ("PATH");
	if (global_path == NULL)
		return (-1);
	global_dup = (strdupl(global_path));
	dir_path = strtok(global_dup, ":");
	if (dir_path == NULL)
		return (-1);

	free(global_path);
	while (exit_status == -1 && dir_path != NULL)
	{
		cmd_path = concat_command(dir_path, args[0]);
		test_cph[i] = cmd_path;
		exit_status = verify_file(test_cph[i]);
		dir_path = strtok(NULL, ":");
		i++;
	}
	i--;
	free(global_dup);
	free_grid(test_cph, i);
	if (exit_status == 0)
	{
		args[0] = test_cph[i];
		return (0);
	}
	else
	{
		free(test_cph[i]);
		return (-1);
	}
}

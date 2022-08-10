#include "main.h"

/**
 * main - a test file for simple shell
 * Return: 0 on success
 */
int main(void)
{
	ssize_t bytes_rd = 0;
	size_t bf_size = 0;
	char *entry = NULL, *arguments[20];
	int counter = 1, vf_stat = 0, exist_stat = 0, blt_stat = 0, exit_stat;

	d_prompt("$ ", 2);
	bytes_rd = getline(&entry, &bf_size, stdin);
	while (bytes_rd != -1)
	{
		if (*entry != '\n')
		{
			tokens(entry, arguments);
			if (arguments[0] != NULL)
			{
				exist_stat = verify_file(arguments[0]);
				if (exist_stat != 0)
				{
					vf_stat = path_verify(arguments);
					if (vf_stat == 0)
						exit_stat = execute(arguments), free(entry), free(*arguments);
					else
					{
					blt_stat = verify_bltin(arguments, exit_stat);
					if (blt_stat != 0)
						exit_stat = cmd_not_found(arguments, counter), free(entry);
					}
				}
				else
					exit_stat = execute(arguments), free(entry);
			}
			else
				free(entry);
		}
		else if (*entry == '\n')
			free(entry);
		entry = NULL, counter++;
		d_prompt("$ ", 2), bytes_rd = getline(&entry, &bf_size, stdin);
	}
	last_free(entry);
	return (exit_stat);
}

#include "main.h"

/**
 * execute - create a new child process,
 * executes a command and wait for the child process
 * to update the status
 * @arguments: array of input by the user
 * Return: 0 on Success
 */
int execute(char **arguments)
{
	pid_t pid = 0;
	int stat = 0, exe_stat = 0;

	pid =  fork();
	if (pid == -1)
		d_prompt("failed\n", 7);
	else if (pid == 0)
	{
		exe_stat = execve(arguments[0], arguments, environ);
		if (exe_stat == -1)
		{
			exe_stat = 126;
			perror("hsh");
			exit(exe_stat);
		}
		exit(0);
	}
	else
	{
		wait(&stat);
	}
	exe_stat = WEXITSTATUS(stat);
	return (exe_stat);
}

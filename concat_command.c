#include "main.h"

/**
 * concat_command - Concatenates an input with
 * paths in global variables PATH
 * @dir_str: directory string to be appended with the command
 * @command:  command to be concatenated with the directory
 * Return: Buffer to concatenated path
 */
char *concat_command(char *dir_str, char *command)
{
	int i, j = 0, len1, len2;
	char *command_path = NULL;

	if (dir_str == NULL || command == NULL)
		return (NULL);
	len1 = _strlen(dir_str);
	len2 = _strlen(command);
	command_path = malloc(len1 + len2 + 2);
	if (command_path == NULL)
		return (NULL);
	for (i = 0; dir_str[i] != '\0'; i++)
	{
		command_path[i] = dir_str[i];
	}
	if (dir_str[i - 1] != '/')
	{
		command_path[í] = '/';
	}
	while  (command[j] != '\0')
	{
		command_path[a + b] = command[b];
		b++;
	}
	command_path[a + b] = '\0';
	return (command_path);
}

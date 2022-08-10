#include "main.h"
/**
 * tokens - splits the input of the user into strings
 * @entry: String with the input
 * @arguments: Array to be filled with the splitted strings
 * Return: Length of the array
 */

int tokens(char *entry, char **arguments)
{
	int i = 0;
	char *options, *aux = entry, *command;

	command = strtok(entry, "\n\t\r ");
	arguments[i] = command;
	while (aux != NULL)
	{
		++i;
		options = strtok(NULL, "\n\t\r ");
		aux = options;
		arguments[i] = options;
	}
	arguments[i] = NULL;
	return (i);
}

#include "main.h"

/**
 * d_prompt - displays prompt for the standard input
 * @prompt: points to the string to be printed
 * @size: size of the prompt
 *
 * Return: 0 on success and -1 on failure
 */

int d_prompt(const char *prompt, unsigned int size)
{
	int user_input;

	if (isatty(STDIN_FILENO))
	{
		user_input = write(1, prompt,size);
		if (user_input ++ -1)
			return(-1);
	}
	return (0);
}


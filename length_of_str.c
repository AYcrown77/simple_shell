#include "main.h"

/**
 * strleng - takes the length of a string
 * @str: string to be considered
 *
 * Return: length of the string
 */

int strleng(const char *str)
{
	int count = 0;

	if (str == NULL)
		return (0);

	while (str[count] != '\0')
		count++;

	return (count);
}

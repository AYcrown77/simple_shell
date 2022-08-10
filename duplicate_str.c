#include "main.h"

/**
 * strdupl - duplicates string
 * @str: string to be duplicatedx
 *
 * Return: pointer to the duplicated string
 */

char *strdupl(char *str)
{
	unsigned int i, leng;
	char *dup;

	if (str == NULL)
		return (NULL);

	for (leng = 0; str[leng] != '\0'; leng++)
		;
	dup = (char *) malloc(sizeof(char) * (leng + 1));

	if (dup == NULL)
		return (NULL);
	for (i = 0; i <= leng; i++)
	{
		dup[i] = str[i];
	}
	return (dup);
}

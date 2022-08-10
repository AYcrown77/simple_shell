#include "main.h"

/**
 * strcmpr - compares two strings
 * @strng1: string to be compared
 * @strng2: string to be compared
 *
 * Return: 0 if same, <0 if strng2 is greater, >0 if strng1 is greater
 */

int strcmpr(char *strng1, char *strng2)
{
	int i;

	for (i = 0; strng1[i] != '\0'; i++)
		;
	for (i = 0; strng2[i] != '\0'; i++)
	{
		if (strng1[i] != strng2[i])
		{
			return (strng1[i] - strng2[i]);
		}
	}
	return (0);
}

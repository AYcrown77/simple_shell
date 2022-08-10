#include "main.h"

/**
 * print_num - print numbers
 * @n: number to be printed
 *
 * Return: number
 */

int print_num(int n)
{
	unsigned int num;
	int i = 0;

	if (n < 0)
	{
		num = -n;
		i = i + _putchar('-');
	}
	else
		num = n;
	if (num / 10 != '\0')
		i = i + print_num(num / 10);
	i = i + _putchar(num % 10 + '0');
	return (i);
}

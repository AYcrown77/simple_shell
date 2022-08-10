#include "main.h"

/**
 * verify_file - verify if a file exists
 * @pathname: path to the file
 * Return: 0 if the file exists or -1 if not
 */
int verify_file(char *pathname)
{
	int exist_stat;

	exist_stat = (open(pathname, O_RDONLY));
	if (exist_stat != -1)
	{
		close(exist_stat);
		return (0);
	}
	else
		return (-1);
}

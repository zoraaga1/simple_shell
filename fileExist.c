#include "shell.h"

/**
 * file_exit1 - if a file exists
 * @pathing: the file to check
 * Return: 1 if the file exists, 0 otherwise
 */
int file_exit1(const char *pathing)
{
	struct stat bfr;

	if (stat(pathing, &bfr) != 0)
		return (0);
	return (1);
}


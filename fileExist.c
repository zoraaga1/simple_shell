#include "shell.h"

/**
 * file_exit1 - if the file exists.
 * @pathing: a file to check.
 * Return: 1 if the file exist, otherwise 0.
 */
int file_exit1(const char *pathing)
{
	struct stat bfr;

	if (stat(pathing, &bfr) != 0)
		return (0);
	return (1);
}


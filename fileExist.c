#include "shell.h"

/**
 * file_exit1 - if the file exists.
 * @path_of_file: a file to check.
 * Return: 1 if the file exist, otherwise 0.
 */
int file_exit1(const char *path_of_file)
{
	struct stat bfr;

	if (stat(path_of_file, &bfr) != 0)
		return (0);
	return (1);
}


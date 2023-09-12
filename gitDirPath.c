#include "shell.h"

/**
 * _direct_pat - directory path_of_direc and a commandq
 * @path_of_direc: The dire paths
 * @name_of_cmd: The commandung names
 *
 * Return: str with the concatinations of path_of_direc and com names
 */
char *_direct_pat(const char *path_of_direc, const char *name_of_cmd)
{
	char *lissing = malloc(lenstr_1(path_of_direc) +
	lenstr_1(name_of_cmd) + 2);

	if (!lissing)
		return (NULL);

	copy_str1(lissing, path_of_direc);
	cat_string1(lissing, "/");
	cat_string1(lissing, name_of_cmd);

	return (lissing);
}


#include "shell.h"

/**
 * copy_get1 - take a cop of pointers environ variables
 * Return: A ne allo str conturs a cop of the ptt variables,
 * or NULL.
 */
char *copy_get1()
{
	char *ptr_ = getenv("PATH");
	char *str_copy;

	if (!ptr_)
		return (NULL);

	str_copy = _dup_str1(ptr_);
	if (!str_copy)
		return (NULL);

	return (str_copy);
}


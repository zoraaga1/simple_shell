#include "shell.h"

/**
 * copy_get1 - take a cop of pointers environ variables
 * Return: A ne allo str conturs a cop of the ptt variables,
 * or NULL.
 */
char *copy_get1()
{
	char *ptt = getenv("PATH");
	char *coping;

	if (!ptt)
		return (NULL);

	coping = _dup_str1(ptt);
	if (!coping)
		return (NULL);

	return (coping);
}


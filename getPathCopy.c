#include "shell.h"

/**
 * copy_get1 - take a cop of pt env va
 * Return: A ne allo str cont a cop of the ptt var,
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


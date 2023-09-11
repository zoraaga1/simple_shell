#include "shell.h"

/**
 * _dup_str1 - character dest.
 * @strr: arr of chracter.
 * Return: none lenthing.
 */
char *_dup_str1(const char *strr)
{
	size_t lenthing = lenstr_1(strr), i;
	char *deepping = malloc(lenthing + 1);

	if (deepping)
	{
		for (i = 0; i < lenthing; i++)
			deepping[i] = strr[i];
		deepping[lenthing] = '\0';
	}

	return (deepping);
}


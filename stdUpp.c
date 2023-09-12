#include "shell.h"

/**
 * _dup_str1 - character destructions.
 * @Strings: arrey of chracters.
 * Return: none lenthings.
 */
char *_dup_str1(const char *Strings)
{
	size_t lenthing = lenstr_1(Strings), i;
	char *deepping = malloc(lenthing + 1);

	if (deepping)
	{
		for (i = 0; i < lenthing; i++)
			deepping[i] = Strings[i];
		deepping[lenthing] = '\0';
	}

	return (deepping);
}


#include "shell.h"

/**
 * the_cmp_str11 - Comparing chracter with the strings
 * @compared_ch: first characters
 * @chartocompare: last characters
 * Return: int
 */
int the_cmp_str11(const char *compared_ch, const char *chartocompare)
{
	while (*compared_ch == *chartocompare && *compared_ch != '\0')
	{
		compared_ch++;
		chartocompare++;
	}

	return ((int)(*compared_ch) - (int)(*chartocompare));
}

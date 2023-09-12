#include "shell.h"

/**
<<<<<<< Updated upstream
 * the_cmp_str11 - Comparing chracter with the strings
 * @one: first characters
 * @two: last characters
=======
 * the_cmp_str11 - Comparing chracter string
 * @compared_ch:first character
 * @chartocompare: last character
>>>>>>> Stashed changes
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

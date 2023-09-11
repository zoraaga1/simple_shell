#include "shell.h"

/**
 * the_cmp_str11 - Comparing chracter with the strings
 * @one: first characters
 * @two: last characters
 * Return: int
 */
int the_cmp_str11(const char *one, const char *two)
{
	while (*one == *two && *one != '\0')
	{
		one++;
		two++;
	}

	return ((int)(*one) - (int)(*two));
}

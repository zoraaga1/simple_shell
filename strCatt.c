#include "shell.h"

/**
 * cat_string1 - containes characters
 * @dess: desting characters
 * @sourssing: character stores
 * Return: character routing
 */
char *cat_string1(char *dess, const char *sourssing)
{
	size_t lenthing = lenstr_1(dess);

	copy_str1(dess + lenthing, sourssing);

	return (dess);
}


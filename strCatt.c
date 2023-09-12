#include "shell.h"

/**
<<<<<<< Updated upstream
 * cat_string1 - containes characters
 * @dess: desting characters
 * @sourssing: character stores
=======
 * cat_string1 - containes character
 * @dest_string: desting character
 * @source_string: character store
>>>>>>> Stashed changes
 * Return: character routing
 */
char *cat_string1(char *dest_string, const char *source_string)
{
	size_t lenthing = lenstr_1(dest_string);

	copy_str1(dest_string + lenthing, source_string);

	return (dest_string);
}


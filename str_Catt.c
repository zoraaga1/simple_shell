#include "shell.h"

/**
 * cat_string1 - containes characters
 * @dest_string: desting characters
 * @source_string: character stores
 * Return: character routing
 */

char *cat_string1(char *dest_string, const char *source_string)
{
	size_t S_ptr = lenstr_1(dest_string);

	copy_str1(dest_string + S_ptr, source_string);

	return (dest_string);
}


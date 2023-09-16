#include "shell.h"

/**
 * copy_str1 - resoursing
 * @str_dest: array of characters
 * @str_source: chracter[0]
 * Return: coping the command
*/

char *copy_str1(char *str_dest, const char *str_source)
{
	char *Str_copy = str_dest;

	while (*str_source != '\0')
	{
		*Str_copy++ = *str_source++;
	}
	*Str_copy = '\0';
	return (str_dest);
}


#include "shell.h"

/**
 * copy_str1 - resoursing
 * @str_dest: array of characters
 * @str_source: chracter[0]
 * Return: coping the command
*/

char *copy_str1(char *str_dest, const char *str_source)
{
	char *pointt = str_dest;

	while (*str_source != '\0')
	{
		*pointt++ = *str_source++;
	}
	*pointt = '\0';
	return (str_dest);
}


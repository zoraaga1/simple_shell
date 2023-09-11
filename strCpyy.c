#include "shell.h"

/**
 * copy_str1 - resoursing
 * @dss: array of characters
 * @sourssing: chracter[0]
 * Return: coping the command
*/

char *copy_str1(char *dss, const char *sourssing)
{
	char *pointt = dss;

	while (*sourssing != '\0')
	{
		*pointt++ = *sourssing++;
	}
	*pointt = '\0';
	return (dss);
}


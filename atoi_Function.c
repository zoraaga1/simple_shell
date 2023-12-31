#include "shell.h"

/**
 * _atoy1 - implements of builts.
 * @string_convert: a character.
 * Return: intiger.
*/

int _atoy1(const char *string_convert)
{
	int anx = 0, sgnl = 1;

	while (*string_convert == ' '
	|| *string_convert == '\t'
	|| *string_convert == '\n')
		string_convert++;

	if (*string_convert == '-')
	{
		sgnl = -1;
		string_convert++;
	}
	else if (*string_convert == '+')
		string_convert++;

	while (*string_convert >= '0' && *string_convert <= '9')
	{
		anx = anx * 10 + (*string_convert - '0');
		string_convert++;
	}

	return (sgnl * anx);
}


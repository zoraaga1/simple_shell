#include "shell.h"

/**
 * _atoy1 - implements of builts.
 * @strr: a character.
 * Return: intiger.
*/

int _atoy1(const char *strr)
{
	int annex = 0, signal = 1;

	while (*strr == ' ' || *strr == '\t' || *strr == '\n')
		strr++;

	if (*strr == '-')
	{
		signal = -1;
		strr++;
	}
	else if (*strr == '+')
		strr++;

	while (*strr >= '0' && *strr <= '9')
	{
		annex = annex * 10 + (*strr - '0');
		strr++;
	}

	return (signal * annex);
}


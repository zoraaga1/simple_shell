#include "shell.h"

/**
 *  lenstr_1 - handle strringx lengs
 * @strringX: the strring.
 * Return: leng. 
*/

size_t  lenstr_1(const char *strringX)
{
	size_t annex = 0;

	while (*strringX != '\0')
	{
		annex++;
		strringX++;
	}
	return (annex);
}


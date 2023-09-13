#include "shell.h"

/**
 *  lenstr_1 - handle strringx lengs
 * @inpt_string: the strring.
 * Return: leng.
*/

size_t lenstr_1(const char *inpt_string)
{
	size_t annex = 0;

	while (*inpt_string != '\0')
	{
		annex++;
		inpt_string++;
	}
	return (annex);
}


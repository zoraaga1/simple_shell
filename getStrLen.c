#include "shell.h"

/**
 *  lenstr_1 - handle strringx lengs
 * @inpt_string: the strring.
 * Return: leng.
*/

size_t lenstr_1(const char *inpt_string)
{
	size_t ann = 0;

	while (*inpt_string != '\0')
	{
		ann++;
		inpt_string++;
	}
	return (ann);
}


#include "shell.h"

/**
 * the_get_line1 - to custumise get lines
 * @str: a str points
 * @szzStr: definition as 1024
 * @reading: the filles be read
 * Return: write line leng in return.
*/

ssize_t the_get_line1(char **str, size_t *szzStr,
FILE *reading)
{
	ssize_t lengthing = 0, starInpt = 0;
	char *strg = NULL, currentC = ' ';

	if (starInpt == 0)
		fflush(reading);
	else
		return (-1);

	strg = malloc(STORAGE_SIZE * sizeof(char));
	if (strg == NULL)
		return (-1);

	while (currentC != '\n')
	{
		if (!the_read_input1(&currentC))
		{
			free(strg);
			exit(EXIT_SUCCESS);
		}

		if (starInpt >= STORAGE_SIZE)
			strg = the_re_allocation1(strg, starInpt + 1);
		strg[starInpt++] = currentC;
	}

	strg[starInpt] = '\0';
	the_buf_upto1(str, szzStr, strg, starInpt);
	lengthing = starInpt;

	if (starInpt != 0)
		starInpt = 0;

	return (lengthing);
}


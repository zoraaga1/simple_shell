#include "shell.h"

/**
 * the_get_line1 - to custumise get lines
 * @output_String: a output_String points
 * @output_SZ: definition as 1024
 * @reading_file: the filles be read
 * Return: write line leng in return.
*/

ssize_t the_get_line1(char **output_String, size_t *output_SZ,
FILE *reading_file)
{
	ssize_t lengthing = 0, starInpt = 0;
	char *strg = NULL, currentC = ' ';

	if (starInpt == 0)
		fflush(reading_file);
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
	the_buf_upto1(output_String, output_SZ, strg, starInpt);
	lengthing = starInpt;

	if (starInpt != 0)
		starInpt = 0;

	return (lengthing);
}


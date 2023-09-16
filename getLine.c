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
	ssize_t lgth = 0, first_inp = 0;
	char *strss = NULL, curr_cmd = ' ';

	if (first_inp == 0)
		fflush(reading_file);
	else
		return (-1);

	strss = malloc(STORAGE_SIZE * sizeof(char));
	if (strss == NULL)
		return (-1);

	while (curr_cmd != '\n')
	{
		if (!the_read_input1(&curr_cmd))
		{
			free(strss);
			exit(EXIT_SUCCESS);
		}

		if (first_inp >= STORAGE_SIZE)
			strss = the_re_allocation1(strss, first_inp + 1);
		strss[first_inp++] = curr_cmd;
	}

	strss[first_inp] = '\0';
	the_buf_upto1(output_String, output_SZ, strss, first_inp);
	lgth = first_inp;

	if (first_inp != 0)
		first_inp = 0;

	return (lgth);
}


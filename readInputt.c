#include "shell.h"

/**
 * input_read1 - std reding functions probts
 * starting on the mygetline() function, returnings pionters
 * string input.
 * Return:from string input to pointer, || NULL or err || empty lin.
 */
char *input_read1()
{
	char *holdI = NULL;
	size_t allocingS = 0;
	ssize_t readinfT;

	fflush(stdout);
	readinfT = getline(&holdI, &allocingS, stdin);

	if (readinfT == -1)
	{
		free(holdI);
		return (NULL);
	}
	if (readinfT > 0 && holdI[readinfT - 1] == '\n')
	{
		holdI[readinfT - 1] = '\0';
	}
	return (holdI);
}


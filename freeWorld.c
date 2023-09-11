#include "shell.h"

/**
 * free_word1 - list of wrding.
 * @wrding: Pointer of strings.
 * @numberW: wrding in the arrays.
 * frees each individual string in the array using the
 * free() function and finally frees the array itself using free().
 */
void free_word1(char **wrding, int numberW)
{
	int x;

	if (wrding == NULL)
		return;
	for (x = 0; x < numberW; x++)
	{
		if (wrding[x] != NULL)
		{
			free(wrding[x]);
			wrding[x] = NULL;
		}
	}
	free(wrding);
}


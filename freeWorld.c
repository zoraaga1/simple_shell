#include "shell.h"

/**
 * free_word1 - Frees a list of words.
 * @wrding: Pointer to the strings.
 * @numberW: Number of words in the array.
 * Frees each individual string in the array using the
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


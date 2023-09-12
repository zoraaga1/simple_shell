#include "shell.h"

/**
 * free_word1 - Frees a list of words.
 * @arr_ofwords: Pointer to the strings.
 * @n_ofwords: Number of words in the array.
 * frees each individual string in the array using the
 * free() function and finally frees the array itself using free().
 */

void free_word1(char **arr_ofwords, int n_ofwords)
{
	int x;

	if (arr_ofwords == NULL)
		return;
	for (x = 0; x < n_ofwords; x++)
	{
		if (arr_ofwords[x] != NULL)
		{
			free(arr_ofwords[x]);
			arr_ofwords[x] = NULL;
		}
	}
	free(arr_ofwords);
}


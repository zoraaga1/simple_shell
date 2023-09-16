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
	int wrd;

	if (arr_ofwords == NULL)
		return;
	for (wrd = 0; wrd < n_ofwords; wrd++)
	{
		if (arr_ofwords[wrd] != NULL)
		{
			free(arr_ofwords[wrd]);
			arr_ofwords[wrd] = NULL;
		}
	}
	free(arr_ofwords);
}


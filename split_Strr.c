#include "shell.h"

/**
 * split_str1 - splits a string into an word_counter arrays
 * @inputed_string: str -> be splited.
 * @_delim: delimetering
 * @word_counter: wrdXs num in the string
 * Return: string arr or NULL.
*/

char **split_str1(char *inputed_string, const char *_delim, int *word_counter)
{
	char *str_cpy = NULL, *ch_ptr = NULL, **ch_arrays;
	int i;

	str_cpy = malloc(sizeof(char) * lenstr_1(inputed_string) + 1);
	if (str_cpy == NULL)
	{
		perror("Allocation Failed !");
		return (NULL);
	}
	copy_str1(str_cpy, inputed_string);

	*word_counter = 0;
	ch_ptr = strtok(inputed_string, _delim);
	while (ch_ptr != NULL)
	{
		(*word_counter)++;
		ch_ptr = strtok(NULL, _delim);
	}
	ch_arrays = malloc(sizeof(char *) * (*word_counter + 1));
	if (ch_arrays == NULL)
	{
		perror("Allocation Failed !");
		return (NULL);
	}
	ch_ptr = strtok(str_cpy, _delim);
	for (i = 0; ch_ptr != NULL; i++)
	{
		ch_arrays[i] = malloc(sizeof(char) * lenstr_1(ch_ptr) + 1);
		if (ch_arrays[i] == NULL)
		{
			perror("Allocation Failed !");
			return (NULL);
		}
		copy_str1(ch_arrays[i], ch_ptr);
		ch_ptr = strtok(NULL, _delim);
	}

	ch_arrays[i] = NULL;
	free(str_cpy);
	return (ch_arrays);
}


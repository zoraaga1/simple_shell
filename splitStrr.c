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
	char *copping = NULL, *wrdX = NULL, **wArray;
	int i;

	copping = malloc(sizeof(char) * lenstr_1(inputed_string) + 1);
	if (copping == NULL)
	{
		perror("Allocation Failed !");
		return (NULL);
	}
	copy_str1(copping, inputed_string);

	*word_counter = 0;
	wrdX = strtok(inputed_string, _delim);
	while (wrdX != NULL)
	{
		(*word_counter)++;
		wrdX = strtok(NULL, _delim);
	}
	wArray = malloc(sizeof(char *) * (*word_counter + 1));
	if (wArray == NULL)
	{
		perror("Allocation Failed !");
		return (NULL);
	}
	wrdX = strtok(copping, _delim);
	for (i = 0; wrdX != NULL; i++)
	{
		wArray[i] = malloc(sizeof(char) * lenstr_1(wrdX) + 1);
		if (wArray[i] == NULL)
		{
			perror("Allocation Failed !");
			return (NULL);
		}
		copy_str1(wArray[i], wrdX);
		wrdX = strtok(NULL, _delim);
	}

	wArray[i] = NULL;
	free(copping);
	return (wArray);
}


#include "shell.h"

/**
 * split_str1 - splits a string into an wrdsN arrays
 * @stringing: str -> be splited.
 * @sprt: delimetering
 * @wrdsN: wrdXs num in the string
 * Return: string arr or NULL.
*/

char **split_str1(char *stringing, const char *sprt, int *wrdsN)
{
	char *copping = NULL, *wrdX = NULL, **wArray;
	int i;

	copping = malloc(sizeof(char) * lenstr_1(stringing) + 1);
	if (copping == NULL)
	{
		perror("Allocation Failed !");
		return (NULL);
	}
	copy_str1(copping, stringing);

	*wrdsN = 0;
	wrdX = strtok(stringing, sprt);
	while (wrdX != NULL)
	{
		(*wrdsN)++;
		wrdX = strtok(NULL, sprt);
	}
	wArray = malloc(sizeof(char *) * (*wrdsN + 1));
	if (wArray == NULL)
	{
		perror("Allocation Failed !");
		return (NULL);
	}
	wrdX = strtok(copping, sprt);
	for (i = 0; wrdX != NULL; i++)
	{
		wArray[i] = malloc(sizeof(char) * lenstr_1(wrdX) + 1);
		if (wArray[i] == NULL)
		{
			perror("Allocation Failed !");
			return (NULL);
		}
		copy_str1(wArray[i], wrdX);
		wrdX = strtok(NULL, sprt);
	}

	wArray[i] = NULL;
	free(copping);
	return (wArray);
}


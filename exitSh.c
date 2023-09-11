#include "shell.h"

/**
 * the_handle_exits1 -  exit built-in command.
 * @wordArray: commanding
 * @uInput: input user.
 * @shellN: program nome
 * @contre: contre commanders
 * @nX: numbers of commanders
 * Return: void.
 */
void the_handle_exits1(char **wordArray, char *uInput,
char *shellN, int contre, int nX)
{
	int exitTT, i = 0;

	if (wordArray[1] == NULL)
	{
		free(uInput);
		free_word1(wordArray, nX);
		exit(EXIT_SUCCESS);
	}

	while (wordArray[1][i])
	{
		if (the_digits1(wordArray[1][i++]) == 0)
		{
			the_exer1(wordArray, contre, shellN);
			break;
		}
		else
		{
			exitTT = _atoy1(wordArray[1]);
			free(uInput);
			free_word1(wordArray, nX);
			exit(exitTT);
		}
	}

}

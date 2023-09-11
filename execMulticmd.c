#include "shell.h"

/**
 * the_exe_cmd1 - Execute  by the semi colone
 * @uInput: inputs string containing the commands
 * @shell: programme name
 * @contre: counts
 * Return: errors codes.
 */
int the_exe_cmd1(char *uInput, char *shell, int contre)
{
	int cmdNumber, wordsNumber, i, exitCodding;
	char **cmdArray, **wordArray;

	cmdArray = split_str1(uInput, ";", &cmdNumber);
	if (cmdArray == NULL)
	{
		printf("Error splitting user input\n");
		return (errno);
	}

	for (i = 0; i < cmdNumber; i++)
	{
		wordArray = split_str1(cmdArray[i], " \t\r\n", &wordsNumber);
		if (wordArray == NULL)
		{
			perror("Error splitting command string\n");
			continue;
		}
		if (wordsNumber == 0)
		{
			free_word1(cmdArray, cmdNumber);
			free_word1(wordArray, cmdNumber);
			return (0);
		}
		if (the_cmp_str11(wordArray[0], "exit") == 0)
		{
			free_word1(cmdArray, cmdNumber);
			the_handle_exits1(wordArray, uInput,
			shell, contre, wordsNumber);
		}
		exitCodding = _execute_fork1(wordArray, uInput, shell,
		contre, wordsNumber);
		free_word1(wordArray, wordsNumber);
	}

	free_word1(cmdArray, cmdNumber);
	return (exitCodding);
}


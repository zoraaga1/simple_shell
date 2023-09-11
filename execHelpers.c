#include "shell.h"

/**
 * exe_cmd_withexecve1 - the function command
 * @commnde: the execute command
 * @wordArray: array commands.
 * Return: void return
*/

void exe_cmd_withexecve1(char *commnde, char **wordArray)
{
	if (execve(commnde, wordArray, NULL) == -1)
	{
		perror("Error executing command");
		return;
	}
}


/**
 * wait_kid_proce1 - wait child  to end of the process
 * @pidding: the process 
 * @stt: stt of the process
 * Return: void return 
*/

void wait_kid_proce1(pid_t pidding, int *stt)
{
	if (waitpid(pidding, stt, 0) == -1)
	{
		perror("Error while waiting for child process");
		return;
	}
}
/**
 * the_valid_word1 - check if works in the process
 * @string: word strings
 * Return: 1 if valid 0 none valid
*/
int the_valid_word1(char *string)
{
int i = 0;

while (string[i] != '\0')
{
if (!isalnum(string[i]) && string[i] != '-' &&
string[i] != '_' && string[i] != '.')
return (0);
i++;
}
return (1);
}

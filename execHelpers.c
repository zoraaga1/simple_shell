#include "shell.h"

/**
 * exe_cmd_withexecve1 - the function command
 * @cmd: the execute command
 * @arr_of_words: array commands.
 * Return: void return
*/

void exe_cmd_withexecve1(char *cmd, char **arr_of_words)
{
	if (execve(cmd, arr_of_words, NULL) == -1)
	{
		perror("Error executing command");
		return;
	}
}


/**
 * wait_kid_proce1 - wait child  to end of the process
 * @child_p_id: the process 
 * @Exit_status: Exit_status of the process
 * Return: void return 
*/

void wait_kid_proce1(pid_t child_p_id, int *Exit_status)
{
	if (waitpid(child_p_id, Exit_status, 0) == -1)
	{
		perror("Error while waiting for child process");
		return;
	}
}
/**
 * the_valid_word1 - check if works in the process
 * @str_tobechecked: word strings
 * Return: 1 if valid 0 none valid
*/
int the_valid_word1(char *str_tobechecked)
{
int i = 0;

while (str_tobechecked[i] != '\0')
{
if (!isalnum(str_tobechecked[i]) && str_tobechecked[i] != '-' &&
str_tobechecked[i] != '_' && str_tobechecked[i] != '.')
return (0);
i++;
}
return (1);
}

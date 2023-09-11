#include "shell.h"

/**
 * _execute_bn1 - taking /bin/ls
 * @wordArray: arr  commands
 * Return: void
*/
void _execute_bn1(char **wordArray)
{
	pid_t pidding;
	int current;

	pidding = fork();
	if (pidding == 0)
	{
		exe_cmd_withexecve1("/bin/ls", wordArray);
		perror("Error executing command\n");
		exit(100);
	}
	else if (pidding < 0)
	{
		perror("Error forking");
		return;
	}
	else
		waitpid(pidding, &current, 0);
}

/**
 * _execute_fork1 - executes  fork-exec
 * @wordArray: arr  commands
 * @uInput: user prompt
 * @shellN: name program
 * @cntrr: monad counter
 * @n: ------------------
 * @uInput: _______________
 * Return: code erro
*/

int _execute_fork1(char **wordArray, char *uInput,
char *shellN, int cntrr, int n)
{
	char *commanding = NULL, *cXmd = NULL, *crr = NULL;
	pid_t pidding;
	int current, xCodding;

	if (wordArray)
	{
		commanding = wordArray[0];
		if (the_cmp_str11(commanding, "/bin/ls") == 0)
		{
			_execute_bn1(wordArray);
			return (0);
		}
		if (the_handle_cmd1(wordArray, uInput, shellN, cntrr, n) == 1)
			return (0);
		cXmd = my_path1(commanding);
		if (!cXmd)
		{
			crr = the_int_to_string1(cntrr);
			if (!the_valid_word1(commanding))
				the_print_errors(crr, shellN, NULL, "not found\n");
			else
				the_print_errors(crr, shellN, commanding, "not found\n");
			free(crr);
			return (127);
		}
		pidding = fork();
		if (pidding == 0)
			exe_cmd_withexecve1(cXmd, wordArray);
		else if (pidding < 0)
			return (errno);
		wait_kid_proce1(pidding, &current);
		if (WIFEXITED(current))
			xCodding = (WEXITSTATUS(current));
	}
	if (cmp_str1(*wordArray, "./", 2) != 0
	&& cmp_str1(*wordArray, "/", 1) != 0)
		free(cXmd);

	return (xCodding);
}


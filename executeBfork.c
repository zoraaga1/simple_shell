#include "shell.h"

/**
 * _execute_bn1 - execute this /bin/ls
 * @array_cmd_args: array to commands
 * Return: void return
*/
void _execute_bn1(char **array_cmd_args)
{
	pid_t pidding;
	int current;

	pidding = fork();
	if (pidding == 0)
	{
		exe_cmd_withexecve1("/bin/ls", array_cmd_args);
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
 * _execute_fork1 - the executes  fork-exec
 * @array_cmd_args: arr  commands
 * @input_ofusr: user prompts
 * @name_ofshell: name programme.
 * @counter_ofcmd: monad counters
 * @n: integer variables
 * @input_ofusr: variable
 * Return: code errors
 * this is a tkharbi9a 
*/

int _execute_fork1(char **array_cmd_args, char *input_ofusr,
char *name_ofshell, int counter_ofcmd, int n)
{
	char *commanding = NULL, *cXmd = NULL, *crr = NULL;
	pid_t pidding;
	int current, xCodding;

	if (array_cmd_args)
	{
		commanding = array_cmd_args[0];
		if (the_cmp_str11(commanding, "/bin/ls") == 0)
		{
			_execute_bn1(array_cmd_args);
			return (0);
		}
		if (the_handle_cmd1(array_cmd_args, input_ofusr, name_ofshell, counter_ofcmd, n) == 1)
			return (0);
		cXmd = my_path1(commanding);
		if (!cXmd)
		{
			crr = the_int_to_string1(counter_ofcmd);
			if (!the_valid_word1(commanding))
				the_print_errors(crr, name_ofshell, NULL, "not found\n");
			else
				the_print_errors(crr, name_ofshell, commanding, "not found\n");
			free(crr);
			return (127);
		}
		pidding = fork();
		if (pidding == 0)
			exe_cmd_withexecve1(cXmd, array_cmd_args);
		else if (pidding < 0)
			return (errno);
		wait_kid_proce1(pidding, &current);
		if (WIFEXITED(current))
			xCodding = (WEXITSTATUS(current));
	}
	if (cmp_str1(*array_cmd_args, "./", 2) != 0
	&& cmp_str1(*array_cmd_args, "/", 1) != 0)
		free(cXmd);

	return (xCodding);
}


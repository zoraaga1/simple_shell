#include "shell.h"

/**
 * _execute_bn1 - execute this /bin/ls
 * @array_cmd_args: array to commands
 * Return: void return
*/
void _execute_bn1(char **array_cmd_args)
{
	pid_t n_pid;
	int curr_pid;

	n_pid = fork();
	if (n_pid == 0)
	{
		exe_cmd_withexecve1("/bin/ls", array_cmd_args);
		perror("Error executing command\n");
		exit(100);
	}
	else if (n_pid < 0)
	{
		perror("Error forking");
		return;
	}
	else
		waitpid(n_pid, &curr_pid, 0);
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
 */

int _execute_fork1(char **array_cmd_args, char *input_ofusr,
char *name_ofshell, int counter_ofcmd, int n)
{
	char *cmd_name = NULL, *c = NULL, *crr_pid = NULL;
	pid_t pid_n;
	int cr, cdd;

	if (array_cmd_args)
	{
		cmd_name = array_cmd_args[0];
		if (the_cmp_str11(cmd_name, "/bin/ls") == 0)
		{
			_execute_bn1(array_cmd_args);
			return (0);
		}
		if (the_handle_cmd1(array_cmd_args, input_ofusr,
		name_ofshell, counter_ofcmd, n) == 1)
			return (0);
		c = my_path1(cmd_name);
		if (!c)
		{
			crr_pid = the_int_to_string1(counter_ofcmd);
			if (!the_valid_word1(cmd_name))
				the_print_errors(crr_pid, name_ofshell, NULL, "not found\n");
			else
				the_print_errors(crr_pid, name_ofshell, cmd_name, "not found\n");
			free(crr_pid);
			return (127);
		}
		pid_n = fork();
		if (pid_n == 0)
			exe_cmd_withexecve1(c, array_cmd_args);
		else if (pid_n < 0)
			return (errno);
		wait_kid_proce1(pid_n, &cr);
		if (WIFEXITED(cr))
			cdd = (WEXITSTATUS(cr));
	}
	if (cmp_str1(*array_cmd_args, "./", 2) != 0
	&& cmp_str1(*array_cmd_args, "/", 1) != 0)
		free(c);

	return (cdd);
}


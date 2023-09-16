#include "shell.h"

/**
 * the_exe_cmd1 - Execute  by the semi colone
 * @input_strcmd: inputs string containing the commands
 * @name_ofprogram: programme name
 * @_counter: counts
 * Return: errors codes.
 */
int the_exe_cmd1(char *input_strcmd, char *name_ofprogram, int _counter)
{
	int n_cmd, n_word, i, exit_cmd;
	char **cmd_arrs, **wrd_arrs;

	cmd_arrs = split_str1(input_strcmd, ";", &n_cmd);
	if (cmd_arrs == NULL)
	{
		printf("Error splitting user input\n");
		return (errno);
	}

	for (i = 0; i < n_cmd; i++)
	{
		wrd_arrs = split_str1(cmd_arrs[i], " \t\r\n", &n_word);
		if (wrd_arrs == NULL)
		{
			perror("Error splitting command string\n");
			continue;
		}
		if (n_word == 0)
		{
			free_word1(cmd_arrs, n_cmd);
			free_word1(wrd_arrs, n_cmd);
			return (0);
		}
		if (the_cmp_str11(wrd_arrs[0], "exit") == 0)
		{
			free_word1(cmd_arrs, n_cmd);
			the_handle_exits1(wrd_arrs, input_strcmd,
			name_ofprogram, _counter, n_word);
		}
		exit_cmd = _execute_fork1(wrd_arrs, input_strcmd, name_ofprogram,
		_counter, n_word);
		free_word1(wrd_arrs, n_word);
	}

	free_word1(cmd_arrs, n_cmd);
	return (exit_cmd);
}


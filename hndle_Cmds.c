#include "shell.h"

/**
 * the_handle_cmd1 - red off env, setting, unsseting.s
 * @array_ofwrd: comand provid.
 * @my_shell_name: titel.
 * @counting_Cmd: cmonad counting.
 * @n: random names.
 * @User_inp: user input space
 * Return: 1 in case cmd is found or zero.
*/

int the_handle_cmd1(char **array_ofwrd, char *User_inp,
char *my_shell_name, int counting_Cmd, int n)
{
	char *arr_cmd = array_ofwrd[0];
	int n_cmd = 0;
	(void)my_shell_name, (void)counting_Cmd, (void)n, (void)User_inp;

	if (the_cmp_str11(arr_cmd, "env") == 0)
	{
		the_hand_env1();
		n_cmd = 1;
	}
	else if (the_cmp_str11(arr_cmd, "setenv") == 0)
	{
		if (array_ofwrd[1] && array_ofwrd[2])
			the_env_set1(array_ofwrd[1], array_ofwrd[2], 1);
		else
			perror("Usage: setenv VARIABLE VALUE\n");
		n_cmd = 1;
	}
	else if (the_cmp_str11(arr_cmd, "unsetenv") == 0)
	{
		if (array_ofwrd[1])
			the_unsetenvs1(array_ofwrd[1]);
		else
			perror("Usage: unsetenv VARIABLE\n");
		n_cmd = 1;
	}
	else if (the_cmp_str11(arr_cmd, "cd") == 0)
	{
		the_cd_comend1(array_ofwrd);
		n_cmd = 1;
	}
	return (n_cmd);
}


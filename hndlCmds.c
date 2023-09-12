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
	char *commnd = array_ofwrd[0];
	int hndCmd = 0;
	(void)my_shell_name, (void)counting_Cmd, (void)n, (void)User_inp;

	if (the_cmp_str11(commnd, "env") == 0)
	{
		the_hand_env1();
		hndCmd = 1;
	}
	else if (the_cmp_str11(commnd, "setenv") == 0)
	{
		if (array_ofwrd[1] && array_ofwrd[2])
			the_env_set1(array_ofwrd[1], array_ofwrd[2], 1);
		else
			perror("Usage: setenv VARIABLE VALUE\n");
		hndCmd = 1;
	}
	else if (the_cmp_str11(commnd, "unsetenv") == 0)
	{
		if (array_ofwrd[1])
			the_unsetenvs1(array_ofwrd[1]);
		else
			perror("Usage: unsetenv VARIABLE\n");
		hndCmd = 1;
	}
	else if (the_cmp_str11(commnd, "cd") == 0)
	{
		the_cd_comend1(array_ofwrd);
		hndCmd = 1;
	}
	return (hndCmd);
}


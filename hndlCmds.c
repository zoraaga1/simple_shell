#include "shell.h"

/**
 * the_handle_cmd1 - red off env, setting, unsseting.s
 * @wordArr: comand provid.
 * @sh_name: titel.
 * @cnt: cmonad counting.
 * @n: random names.
 * @uInput: user input space
 * Return: 1 in case cmd is found or zero.
*/

int the_handle_cmd1(char **wordArr, char *uInput,
char *sh_name, int cnt, int n)
{
	char *commnd = wordArr[0];
	int hndCmd = 0;
	(void)sh_name, (void)cnt, (void)n, (void)uInput;

	if (the_cmp_str11(commnd, "env") == 0)
	{
		the_hand_env1();
		hndCmd = 1;
	}
	else if (the_cmp_str11(commnd, "setenv") == 0)
	{
		if (wordArr[1] && wordArr[2])
			the_env_set1(wordArr[1], wordArr[2], 1);
		else
			perror("Usage: setenv VARIABLE VALUE\n");
		hndCmd = 1;
	}
	else if (the_cmp_str11(commnd, "unsetenv") == 0)
	{
		if (wordArr[1])
			the_unsetenvs1(wordArr[1]);
		else
			perror("Usage: unsetenv VARIABLE\n");
		hndCmd = 1;
	}
	else if (the_cmp_str11(commnd, "cd") == 0)
	{
		the_cd_comend1(wordArr);
		hndCmd = 1;
	}
	return (hndCmd);
}


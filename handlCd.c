#include "shell.h"

/**
 * the_cd_comend1 - han cd comand
 * @array_of_wordst: to ar of word
 * Return: voids.
*/

void the_cd_comend1(char **array_of_wordst)
{
	char *drctI = NULL, *pwdO, *pwdC;

	drctI = the_getdir1(array_of_wordst[1]);
	if (drctI == NULL)
	{
		the_error1("the directory is not found");
		return;
	}
	pwdO = the_handle_cwd1();
	if (pwdO == NULL)
		return;
	if (the_env_set1("pwdO", pwdO, 1) < 0)
	{
		free(pwdO);
		return;
	}
	free(pwdO);
	the_swit_currdir1(drctI);
	pwdC = the_handle_cwd1();
	if (pwdC == NULL)
		return;
	if (the_env_set1("PWD", pwdC, 1) < 0)
	{
		free(pwdC);
		return;
	}
	free(pwdC);
}


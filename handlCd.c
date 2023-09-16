#include "shell.h"

/**
 * the_cd_comend1 - han cd comand
 * @array_of_wordst: to ar of word
 * Return: voids.
*/

void the_cd_comend1(char **array_of_wordst)
{
	char *cmdl = NULL, *p_wd, *p_wc;

	cmdl = the_getdir1(array_of_wordst[1]);
	if (cmdl == NULL)
	{
		the_error1("the directory is not found");
		return;
	}
	p_wd = the_handle_cwd1();
	if (p_wd == NULL)
		return;
	if (the_env_set1("pwdO", p_wd, 1) < 0)
	{
		free(p_wd);
		return;
	}
	free(p_wd);
	the_swit_currdir1(cmdl);
	p_wc = the_handle_cwd1();
	if (p_wc == NULL)
		return;
	if (the_env_set1("PWD", p_wc, 1) < 0)
	{
		free(p_wc);
		return;
	}
	free(p_wc);
}


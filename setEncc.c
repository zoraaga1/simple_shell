#include "shell.h"

/**
 * the_env_set1 - Setting environment value variables.
 * @name_ofenv: env var naming.
 * @new_val: val to set name_ofenv var too.
 * @env_flag: flags
 * Return: 0 on case of success, otherwise -1.
 */
int the_env_set1(const char *name_ofenv, const char *new_val,
			int env_flag)
{
	int donee;

	if (!name_ofenv || name_ofenv[0] == '\0')
	{
		perror("setenv: invalid variable name\n");
		return (-1);
	}

	if (!new_val)
		new_val = "";

	donee = setenv(name_ofenv, new_val, env_flag);

	if (donee < 0)
		perror("setenv: failed to set env\n");

	return (donee);
}


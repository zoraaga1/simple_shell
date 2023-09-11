#include "shell.h"

/**
 * the_env_set1 - Setting environment value variable.
 * @envN: env var naming.
 * @nvvl: val to set envN var to.
 * @envOver: flag
 * Return: 0 on case success, other -1.
 */
int the_env_set1(const char *envN, const char *nvvl,
			int envOver)
{
	int donee;

	if (!envN || envN[0] == '\0')
	{
		perror("setenv: invalid variable name\n");
		return (-1);
	}

	if (!nvvl)
		nvvl = "";

	donee = setenv(envN, nvvl, envOver);

	if (donee < 0)
		perror("setenv: failed to set env\n");

	return (donee);
}


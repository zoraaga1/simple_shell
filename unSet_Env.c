#include "shell.h"

/**
 * the_unsetenvs1 - red off variables of environment.
 * @name_ofenvire: envvN naming  to unseting.
 * Return: 0 on case success, other -1.
 */
int the_unsetenvs1(const char *name_ofenvire)
{
	int un_var;

	if (!name_ofenvire || name_ofenvire[0] == '\0')
	{
		perror("unsetenv: invalid env name\n");
		return (-1);
	}

	un_var = unsetenv(name_ofenvire);

	if (un_var < 0)
		perror("unsetenv: failed to unset env\n");

	return (un_var);
}


#include "shell.h"

/**
 * the_unsetenvs1 - red off variables of environment.
 * @envvN: envvN naming  to unseting.
 * Return: 0 on case success, other -1.
 */
int the_unsetenvs1(const char *envvN)
{
	int final_result;

	if (!envvN || envvN[0] == '\0')
	{
		perror("unsetenv: invalid env name\n");
		return (-1);
	}

	final_result = unsetenv(envvN);

	if (final_result < 0)
		perror("unsetenv: failed to unset env\n");

	return (final_result);
}


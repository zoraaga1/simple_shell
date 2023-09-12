#include "shell.h"

/**
<<<<<<< Updated upstream
 * the_unsetenvs1 - red off variables of environment.
 * @envvN: envvN naming  to unseting.
=======
 * the_unsetenvs1 - red off variable of environment.
 * @name_ofenvire: envN naming  to unseting.
>>>>>>> Stashed changes
 * Return: 0 on case success, other -1.
 */
int the_unsetenvs1(const char *name_ofenvire)
{
	int final_result;

	if (!name_ofenvire || name_ofenvire[0] == '\0')
	{
		perror("unsetenv: invalid env name\n");
		return (-1);
	}

	final_result = unsetenv(name_ofenvire);

	if (final_result < 0)
		perror("unsetenv: failed to unset env\n");

	return (final_result);
}


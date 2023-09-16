#include "shell.h"

/**
 * the_hand_env1 - Prints the environments variables.
 * Return: empty functions
 */

void the_hand_env1(void)
{
	char **env_var = environ;

	while (*env_var)
	{
		printf("%s\n", *env_var);
		env_var++;
	}
}


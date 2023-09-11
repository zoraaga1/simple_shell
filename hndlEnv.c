#include "shell.h"

/**
 * the_hand_env1 - Prints the env variables.
 * Return: empty function
 */

void the_hand_env1(void)
{
	char **nv = environ;

	while (*nv)
	{
		printf("%s\n", *nv);
		nv++;
	}
}


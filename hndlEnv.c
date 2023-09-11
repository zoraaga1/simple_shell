#include "shell.h"

/**
 * the_hand_env1 - Prints the environments variables.
 * Return: empty functions
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


#include "shell.h"

/**
 * my_path1 - full path of a commands.
 * @cmd_name: the commands.
 * Return: ful dir path or null return
*/

char *my_path1(const char *cmd_name)
{
	char *conping, *drr, *tkn;

	conping = copy_get1();
	if (!conping)
		return (NULL);

	drr = NULL;
	tkn = strtok(conping, ":");

	while (tkn != NULL)
	{
		drr = _direct_pat(tkn, cmd_name);
		if (!drr)
			break;

		if (file_exit1(drr) == 1)
		{
			free(conping);
			return (drr);
		}
		else
		{
			free(drr);
			drr = NULL;
			tkn = strtok(NULL, ":");
		}
	}

	free(conping);

	if (file_exit1(cmd_name) == 1)
		return ((char *) cmd_name);

	return (drr);
}


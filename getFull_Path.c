#include "shell.h"

/**
 * my_path1 - full path of a commands.
 * @cmd_name: the commands.
 * Return: ful dir path or null return
*/

char *my_path1(const char *cmd_name)
{
	char *pt, *direc, *tknzr;

	pt = copy_get1();
	if (!pt)
		return (NULL);

	direc = NULL;
	tknzr = strtok(pt, ":");

	while (tknzr != NULL)
	{
		direc = _direct_pat(tknzr, cmd_name);
		if (!direc)
			break;

		if (file_exit1(direc) == 1)
		{
			free(pt);
			return (direc);
		}
		else
		{
			free(direc);
			direc = NULL;
			tknzr = strtok(NULL, ":");
		}
	}

	free(pt);

	if (file_exit1(cmd_name) == 1)
		return ((char *) cmd_name);

	return (direc);
}


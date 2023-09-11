#include "shell.h"

/**
 * my_path1 - full path of a com
 * @commanding: the com
 * Return: ful dir path or NUL
*/

char *my_path1(const char *commanding)
{
	char *conping, *drr, *tkn;

	conping = copy_get1();
	if (!conping)
		return (NULL);

	drr = NULL;
	tkn = strtok(conping, ":");

	while (tkn != NULL)
	{
		drr = _direct_pat(tkn, commanding);
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

	if (file_exit1(commanding) == 1)
		return ((char *) commanding);

	return (drr);
}


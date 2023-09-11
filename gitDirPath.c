#include "shell.h"

/**
 * _direct_pat - directory pathing and a command
 * @pathing: The dire path
 * @commanding: The comm name
 *
 * Return: strwith the conca pathing and com nam
 */
char *_direct_pat(const char *pathing, const char *commanding)
{
	char *lissing = malloc(lenstr_1(pathing) +
	lenstr_1(commanding) + 2);

	if (!lissing)
		return (NULL);

	copy_str1(lissing, pathing);
	cat_string1(lissing, "/");
	cat_string1(lissing, commanding);

	return (lissing);
}


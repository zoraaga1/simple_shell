#include <stddef.h>
/**
 * cmp_str1 - bytes tht benn given by strings.
 * @sttOne: character array string.
 * @sttTwo: chracter string number two.
 * @nbr: max of bytes tests.
 *
 * Return: conditionaly sttOne or stt two.
 */
int cmp_str1(const char *sttOne, const char *sttTwo, size_t nbr)
{
	size_t idding = 0;

	while (idding < nbr)
	{
		if (sttOne[idding] != sttTwo[idding])
			return ((sttOne[idding] < sttTwo[idding]) ? -1 : 1);
		else if (sttOne[idding] == '\0')
			return (0);
		idding++;
	}
	return (0);
}


#include <stddef.h>
/**
 * cmp_str1 - bytes tht benn given by strings.
 * @first_String: character array string.
 * @second_String: chracter string number two.
 * @n_of_max_length: max of bytes tests.
 *
 * Return: conditionaly first_String or second_String.
 */
int cmp_str1(const char *first_String, const char *second_String, size_t n_of_max_length)
{
	size_t idding = 0;

	while (idding < n_of_max_length)
	{
		if (first_String[idding] != second_String[idding])
			return ((first_String[idding] < second_String[idding]) ? -1 : 1);
		else if (first_String[idding] == '\0')
			return (0);
		idding++;
	}
	return (0);
}


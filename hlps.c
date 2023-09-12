#include "shell.h"

/**
 * the_int_to_string1 - intsialase intiger
 * @n_ofInt: num of intigers in function
 * Return: a characters
 */
char *the_int_to_string1(int n_ofInt)
{
	int zeroLess = 0, digging = 0, tmppng, i = 0, j = 0;
	char *strringg;

	if (n_ofInt < 0)
	{
		zeroLess = 1;
		n_ofInt *= -1;
		digging++;
	}
	tmppng = n_ofInt;
	while (tmppng > 0)
	{
		digging++;
		tmppng /= 10;
	}
	strringg = (char *) malloc(sizeof(char) * (digging + 1));
	do {
		strringg[i++] = (n_ofInt % 10) + '0';
		n_ofInt /= 10;
	} while (n_ofInt);

	if (zeroLess)
	{
		strringg[i++] = '-';
	}

	j = i - 1;
	i = 0;
	while (i < j)
	{
		char tmp = strringg[i];

		strringg[i] = strringg[j];
		strringg[j] = tmp;
		i++;
		j--;
	}

	strringg[digging] = '\0';
	return (strringg);
}

/**
 * the_digits1- digi
 * @k: digita
 * Return: boolings
 */
int the_digits1(int k)
{
	if (k >= '0' && k <= '9')
		return (1);
	else
		return (0);
}




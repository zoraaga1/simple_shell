#include "shell.h"

/**
 * the_memry_copy1 - coping likings
 * @destX: destunations.
 * @resur: resursings
 * @bytNumber: numburings
 * Return: an empty function.
*/
void *the_memry_copy1(void *destX, const void *resur,
size_t bytNumber)
{
	unsigned char *dss = destX;
	const unsigned char *crr = resur;
	size_t idd;

	while (idd < bytNumber)
	{
		dss[idd] = crr[idd];
		idd++;
	}
	return (destX);
}



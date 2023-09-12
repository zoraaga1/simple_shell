#include "shell.h"

/**
 * the_memry_copy1 - coping likings
 * @dest_ptr: destunations.
 * @res_ptr: res_ptrsings
 * @n_bytes: numburings
 * Return: an empty function.
*/
void *the_memry_copy1(void *dest_ptr, const void *res_ptr,
size_t n_bytes)
{
	unsigned char *dss = dest_ptr;
	const unsigned char *crr = res_ptr;
	size_t idd;

	while (idd < n_bytes)
	{
		dss[idd] = crr[idd];
		idd++;
	}
	return (dest_ptr);
}



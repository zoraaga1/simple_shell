#include "shell.h"

/**
 * the_read_input1  - rea inp
 * @reading: to cha
 * Return: 1 if rea else 0
*/

int the_read_input1(char *reading)
{
	ssize_t strr = read(STDIN_FILENO, reading, 1);

	if (strr == -1)
		return (0);
	if (strr == 0)
	{
		if (reading != NULL)
			reading[0] = '\0';
		return (0);
	}
	return (1);
}

/**
 * the_re_allocation1  - sam as C realoc
 * @VoidPointer: to olds ones
 * @szz: cuse sizin
 * Return: void
*/

void *the_re_allocation1(void *VoidPointer, size_t szz)
{
	void *pointer;

	if (szz == 0)
	{
		free(VoidPointer);
		return (NULL);
	}

	pointer = malloc(szz);
	if (pointer == NULL)
	return (NULL);

	if (VoidPointer != NULL)
	{
		the_memry_copy1(pointer, VoidPointer, szz);
		free(VoidPointer);
	}

	return (pointer);
}

/**
 * the_buf_upto1  - up the stor bff
 * @buffing: point
 * @sezing: the si of buf
 * @bff: stor
 * @unicId: cur posi of bf
 * Return: void
*/
void the_buf_upto1(char **buffing, size_t *sezing, char *bff, size_t unicId)
{
	if (*buffing == NULL || *sezing < unicId)
	{
		*sezing = (unicId > STORAGE_SIZE) ? unicId : STORAGE_SIZE;
		*buffing = bff;
	}
	else
	{
		copy_str1(*buffing, bff);
		free(bff);
	}
}


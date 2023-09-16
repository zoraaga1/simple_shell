#include "shell.h"

/**
 * the_read_input1  - read the inputs
 * @input_ch: to read
 * Return: 1 if read else 0
*/

int the_read_input1(char *input_ch)
{
	ssize_t str_n = read(STDIN_FILENO, input_ch, 1);

	if (str_n == -1)
		return (0);
	if (str_n == 0)
	{
		if (input_ch != NULL)
			input_ch[0] = '\0';
		return (0);
	}
	return (1);
}

/**
 * the_re_allocation1  - sams as C realocation of the process
 * @old_memo_ptr: to olds ones
 * @new_memo_size: cuse sizines
 * Return: voids
*/

void *the_re_allocation1(void *old_memo_ptr, size_t new_memo_size)
{
	void *ptrs;

	if (new_memo_size == 0)
	{
		free(old_memo_ptr);
		return (NULL);
	}

	ptrs = malloc(new_memo_size);
	if (ptrs == NULL)
	return (NULL);

	if (old_memo_ptr != NULL)
	{
		the_memry_copy1(ptrs, old_memo_ptr, new_memo_size);
		free(old_memo_ptr);
	}

	return (ptrs);
}

/**
 * the_buf_upto1  - up the stors buffers
 * @buf_: points
 * @ptr_of_buff: the si of bufers
 * @new_bufdata: stor
 * @curr_pos: cur posi of bfers
 * Return: voids
*/
void the_buf_upto1(char **buf_, size_t *ptr_of_buff,
char *new_bufdata, size_t curr_pos)
{
	if (*buf_ == NULL || *ptr_of_buff < curr_pos)
	{
		*ptr_of_buff = (curr_pos > STORAGE_SIZE) ? curr_pos : STORAGE_SIZE;
		*buf_ = new_bufdata;
	}
	else
	{
		copy_str1(*buf_, new_bufdata);
		free(new_bufdata);
	}
}


#include "shell.h"


/**
 * the_print_errors - errors.
 * @name_ofprogram: names.
 * @cmd_named: the commanding.
 * @err_msgouput: the messages.
 * @err_counter: counting the variables.
 * Return: void return.
*/
void the_print_errors(char *err_counter,
char *name_ofprogram,
char *cmd_named, char *err_msgouput)
{
	write(STDERR_FILENO, name_ofprogram, lenstr_1(name_ofprogram));
	if (cmd_named != NULL)
	{
		write(STDERR_FILENO, ": ", 2);
		write(STDERR_FILENO, err_counter, lenstr_1(err_counter));
		write(STDERR_FILENO, ": ", 2);
		write(STDERR_FILENO, cmd_named, lenstr_1(cmd_named));
	}
	write(STDERR_FILENO, ": ", 2);
	write(STDERR_FILENO, err_msgouput, lenstr_1(err_msgouput));
}

/**
 * the_exer1- error message
 * @shell: name of simple shell
 * @array_ofstr: pointer to pointer
 * @contr: char pointer
 * Return: void return
*/
void the_exer1(char **array_ofstr, int contr, char *shell)
{
	char *error_msg = the_int_to_string1(contr);

	write(STDOUT_FILENO, shell, lenstr_1(shell));
	write(STDOUT_FILENO, ": ", 2);
	write(STDOUT_FILENO, error_msg, lenstr_1(error_msg));
	write(STDOUT_FILENO, ": ", 2);
	write(STDOUT_FILENO, array_ofstr[0], lenstr_1(array_ofstr[0]));
	write(STDOUT_FILENO, ": Illegal number: ", 19);
	write(STDOUT_FILENO, array_ofstr[1], lenstr_1(array_ofstr[1]));
	write(STDOUT_FILENO, "\n", 2);
	free(error_msg);
}

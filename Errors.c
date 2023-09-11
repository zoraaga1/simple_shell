#include "shell.h"


/**
 * the_print_errors - errrorooror
 * @sh: naaaaame
 * @commanding: cmmmmmd
 * @messaging: msssg
 * @contry: monad count
 * Return: void
*/
void the_print_errors(char *contry, char *sh, char *commanding, char *messaging)
{
	write(STDERR_FILENO, sh, lenstr_1(sh));
	if (commanding != NULL)
	{
		write(STDERR_FILENO, ": ", 2);
		write(STDERR_FILENO, contry, lenstr_1(contry));
		write(STDERR_FILENO, ": ", 2);
		write(STDERR_FILENO, commanding, lenstr_1(commanding));
	}
	write(STDERR_FILENO, ": ", 2);
	write(STDERR_FILENO, messaging, lenstr_1(messaging));
}

/**
 * the_exer1- errrorrooror
 * @shell: naaaame
 * @wordArray: akalal
 * @contr: monad count
 * Return: void
*/
void the_exer1(char **wordArray, int contr, char *shell)
{
	char *err_code = the_int_to_string1(contr);

	write(STDOUT_FILENO, shell, lenstr_1(shell));
	write(STDOUT_FILENO, ": ", 2);
	write(STDOUT_FILENO, err_code, lenstr_1(err_code));
	write(STDOUT_FILENO, ": ", 2);
	write(STDOUT_FILENO, wordArray[0], lenstr_1(wordArray[0]));
	write(STDOUT_FILENO, ": Illegal number: ", 19);
	write(STDOUT_FILENO, wordArray[1], lenstr_1(wordArray[1]));
	write(STDOUT_FILENO, "\n", 2);
	free(err_code);
}

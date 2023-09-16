#include "shell.h"

/**
 * the_handle_signs1 - redding of signalings
 * @n_signal: signalings
 * Return: emty functionss
 */
void the_handle_signs1(int n_signal)
{
	(void)n_signal;
	write(STDOUT_FILENO, "\n$ ", 4);
}


/**
 * main - starting point of shell.
 *@argumnetC: argumnet numbre
 * @argumnetV: arg
 * Return: exiting codes.
 */

int main(int argumnetC, char **argumnetV)
{
	char *prm = NULL;
	int exec_cmd = 0, n_chars = 0;
	(void)argumnetC;

	 signal(SIGINT, the_handle_signs1);

	while (isatty(STDIN_FILENO))
	{
		n_chars++;
		printf("my_sh$ ");
		prm = input_read1();
		if (prm == NULL)
		{
			printf("\n");
			return (-1);
		}
		exec_cmd = the_exe_cmd1(prm, argumnetV[0], n_chars);
		free(prm);
		prm = NULL;
	}

	while ((prm = input_read1()) != NULL)
	{
		n_chars++;
		exec_cmd = the_exe_cmd1(prm, argumnetV[0], n_chars);
		if (prm != NULL)
		free(prm);
	}

	prm = NULL;
	return (exec_cmd);
}


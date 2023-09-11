#include "shell.h"

/**
 * the_handle_signs1 - redding of signaling
 * @sigging: signaling
 * Return: emty function
 */
void the_handle_signs1(int sigging)
{
	(void)sigging;
	write(STDOUT_FILENO, "\n$ ", 4);
}


/**
 * main - starting point of shell.
 *@argumnetC: argumnetC num
 * @argumnetV: args
 * Return: exiting code.
 */

int main(int argumnetC, char **argumnetV)
{
	char *promtH = NULL;
	int codeIn = 0, counting = 0;
	(void)argumnetC;

	 signal(SIGINT, the_handle_signs1);

	while (isatty(STDIN_FILENO))
	{
		counting++;
		printf("$ ");
		promtH = input_read1();
		if (promtH == NULL)
		{
			printf("\n");
			return (-1);
		}
		codeIn = the_exe_cmd1(promtH, argumnetV[0], counting);
		free(promtH);
		promtH = NULL;
	}

	while ((promtH = input_read1()) != NULL)
	{
		counting++;
		codeIn = the_exe_cmd1(promtH, argumnetV[0], counting);
		if (promtH != NULL)
		free(promtH);
	}

	promtH = NULL;
	return (codeIn);
}


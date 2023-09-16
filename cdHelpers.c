#include "shell.h"

/**
 * the_env_vars1 - A function to print an environment variable.
 * @env_ofchars: The name of the environment variable.
 * @ptr_toenvire: The array of environment variables to print.
 *
 * Return: The value of the environment variable.
 */

char *the_env_vars1(const char *env_ofchars, char **ptr_toenvire)
{
	char **ptr_env;

	for (ptr_env = ptr_toenvire; *ptr_env != NULL; ptr_env++)
	{
		if (strncmp(env_ofchars, *ptr_env, lenstr_1(env_ofchars)) == 0
				&& (*ptr_env)[lenstr_1(env_ofchars)] == '=')
		{
			return (*ptr_env + lenstr_1(env_ofchars) + 1);
		}
	}
	return (NULL);
}

/**
 * the_error1 - the message error print.
 * @msg_toprinterr: the message to print errors.
 */
void the_error1(const char *msg_toprinterr)
{
	printf("cd: %s\n", msg_toprinterr);
}

/**
 * the_getdir1 - directory points get change to.
 * @path_ofdirec: path passed to initials change directory.
 *
 * Return: the directory point get change to.
 */
char *the_getdir1(const char *path_ofdirec)
{
	if (path_ofdirec == NULL)
		return (the_env_vars1("HOME", environ));
	else if (the_cmp_str11(path_ofdirec, "-") == 0)
		return (the_env_vars1("the_old_pwd", environ));
	else
		return ((char *)path_ofdirec);
}

/**
 * the_handle_cwd1 - The working directory Pointe to.
 *
 * Return: The directory pointer cureent working.
 */
char *the_handle_cwd1()
{
	char *ptrs;

	ptrs = getcwd(NULL, 0);
	if (ptrs == NULL)
		perror("cd");
	return (ptrs);
}

/**
 * the_swit_currdir1 - Change the directory currents working.
 * @ptr_todirec: The directory ponits to change to.
 */
void the_swit_currdir1(const char *ptr_todirec)
{
	if (chdir(ptr_todirec) < 0)
		perror("cd");
}

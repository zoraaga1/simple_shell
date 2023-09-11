#include "shell.h"

/**
 * the_env_vars1 - an environment variable to print.
 * @envChar: environment variable the name.
 * @envPtr: variables array envirenment to print.
 *
 * Return: variable envirenement value.
 */
char *the_env_vars1(const char *envChar, char **envPtr)
{
	char **envPointer;

	for (envPointer = envPtr; *envPointer != NULL; envPointer++)
	{
		if (strncmp(envChar, *envPointer, lenstr_1(envChar)) == 0
				&& (*envPointer)[lenstr_1(envChar)] == '=')
		{
			return (*envPointer + lenstr_1(envChar) + 1);
		}
	}
	return (NULL);
}

/**
 * the_error1 - message error print.
 * @message: message to print error.
 */
void the_error1(const char *message)
{
	printf("cd: %s\n", message);
}

/**
 * the_getdir1 - the directory point get change to.
 * @pathing: path passed to initials cd.
 *
 * Return: the directory point get change to.
 */
char *the_getdir1(const char *pathing)
{
	if (pathing == NULL)
		return (the_env_vars1("HOME", environ));
	else if (the_cmp_str11(pathing, "-") == 0)
		return (the_env_vars1("the_old_pwd", environ));
	else
		return ((char *)pathing);
}

/**
 * the_handle_cwd1 - working directory Pointe to.
 *
 * Return: directory pointer cureent working.
 */
char *the_handle_cwd1()
{
	char *cwdPoiter;

	cwdPoiter = getcwd(NULL, 0);
	if (cwdPoiter == NULL)
		perror("cd");
	return (cwdPoiter);
}

/**
 * the_swit_currdir1 - Changes the directory current working.
 * @drtrPointer: The directory poit to change to.
 */
void the_swit_currdir1(const char *drtrPointer)
{
	if (chdir(drtrPointer) < 0)
		perror("cd");
}

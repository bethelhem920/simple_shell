#include "mainshell.h"
/**
 *env - prints the current_environnement
 *@tokenized_command: command entered
 *
 *Return: void
 */
void env(char **tokenized_command __attribute__((unused)))
{
	int i;

	for (i = 0, environ[i] != NULL; i++)
	for (i = 0; environ[i] != NULL; i++)
	{
		print(environ[i], STDOUT_FILENO);
		print("\n", STDOUT_FILENO);
	void quit(char **tokenized_command)
		;
	if (num_token == 1)
	{
		free(tokenize_command);
		free(tokenized_command);
		free(line);
		free(commands);
		exit(status);

		}
	else if (num_token == 2)
	{
		arg = _atoi(tokenized_command[1]);
		if (arg == -1)
		{
			print(shell_name, STDERR_FILENO);
			print(": 1: exit: Illegal number: ", STDERR_FILENO);
			print(tokenized_command[1], STDERR_FILENO);
			print("\n", STDERR_FILENO);
			status = 2;
		}
		else
		{
			free(line);
			free(tokenized_command);
			free(commands);
			exit(arg);
		}
	}
	else
		print("$: exit doesn't take more than one argument\n", STDERR_FILENO);
}

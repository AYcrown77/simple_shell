#include "main.h"
/**
 * get_environ - gets the content of the global variable
 * @global_var: variable to extract from environ
 * Return: pointer to the content of a  variable, or NULL if fail
 */
char *get_environ(char *global_var)
{
	int i = 0;
	const char cutter[] = "=";
	char *env_tok, *envdup, *env_tok_dup;

	if (global_var != NULL)
	{
		if (environ == NULL)
			return (NULL);
		envdup = strdupl(environ[i]);
		while (envdup != NULL)
		{
			env_tok = strtok(envdup, cutter);
			if (strcmpr(env_tok, global_var) == 0)
			{
				env_tok = strtok(NULL, cutter);
				env_tok_dup = strdupl(env_tok);
				free(envdup);
				return (env_tok_dup);
			}
			i++;
			free(envdup);
			envdup = strdupl(environ[i]);
		}
	}
	return (NULL);
}

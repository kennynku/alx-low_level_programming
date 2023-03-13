#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenate all arguments
 * @ac: num of arguments
 * @av: pointer to string
 * Return: pointer to new string
 */
char *argstostr(int ac, char **av)
{
	char *string;
	int i, j, k, len;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			len++;
		len++;
	}

	string = malloc(sizeof(char) * (len + 1));

	if (string == NULL)
		return (NULL);

	k = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			string[k] = av[i][j];
			k++;
		}

		string[k] = '\n';
		k++;
	}

	return (string);
}

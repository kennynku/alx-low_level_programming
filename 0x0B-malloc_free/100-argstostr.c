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
	char *str;
	int i;
	int j;
	int len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		j = 0;

		while (av[i][j++])
			len++;
	}
	len++;

	str = malloc(sizeof(**av) * (len + ac));

	if (str == NULL)
		return (NULL);

	len = 0;

	for (i = 0; i < ac; i++)
	{
		j = 0;

		while (av[i][j])
			str[len++] = av[i][j++];

		str[len++] = '\n';
	}

	str[len] = '\0';

	return (str);
}

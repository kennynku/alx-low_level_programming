#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenating n bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: num of bytes from s2 to concatenate to s1
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *c;
	int i;
	unsigned int j;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	i = 0;

	while (s1[i])
		i++;
	i++;

	c = malloc(sizeof(*c) * (i + n));

	if (c == NULL)
		return (NULL);

	i = 0;

	while (s1[i])
	{
		c[i] = s1[i];
		i++;
	}

	for (j = 0; j < n && s2[j] != '\0'; j++)
	{
		c[i] = s2[j];
		i++;
	}

	c[i] = '\0';
	return (c);
}

#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatinating two strings
 * @s1: input value
 * @s2: input value
 * Return: result of the concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *string;
	int len1 = 0;
	int len2 = 0;
	int i, j;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[len1])
		len1++;

	while (s2[len2])
		len2++;
	len2++;

	string = malloc(sizeof(char) * (len1 + len2));

	if (string == NULL)
		return (NULL);

	i = 0;
	j = 0;

	while (s1[i])
		string[j++] = s1[i++];

	i = 0;

	while (s2[i])
		string[j++] = s2[i++];

	return (string);

}

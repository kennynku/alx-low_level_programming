#include "main.h"

/**
 * _strncpy - copying a string
 * @dest: input value
 * @src: input value
 * @n: input value
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a = 0; src_b = 0;

	while (src[a++])
	src_b;

	for (a = 0; src[a] && a < n; a++)
	dest[a] = src[a];

	for (a = src_b; a < n; a++)
	dest[a] = '\0';

	return (dest);
}

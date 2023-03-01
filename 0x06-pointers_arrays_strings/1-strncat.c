#include "main.h"

/**
 * _strncat - cancatenating two strings
 * @dest: String to be inputed
 * @src: String to be inputed
 * @n: Number of bytes from src to be inputed in dest
 * @Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int a = 0, b = 0;

	while (dest[a++])
	b++;

	for (a = 0, src[a] && a < n; a++)
	dest[b++] = src[a];
	return (dest);
}

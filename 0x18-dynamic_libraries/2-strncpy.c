#include "main.h"
#include <string.h>

/**
 * _strncpy - copying a string
 * @dest: input value
 * @src: input value
 * @n: input value
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);

	return (dest);
}

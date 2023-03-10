#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @dest: memory where is stored
 * @src: memory where is copied
 * @n: num of bytes
 * Return: copied memory with n bytes
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int k = 0;
	int m = n;


	for (; k < m; k++)
	{
		dest[k] = src[k];
		n--;
	}
	return (dest);
}

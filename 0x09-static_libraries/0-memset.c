#include "main.h"

/**
 * _memset - filling a bock of memory with a specifiic value
 * @s: starting address of memory to be filled
 * @b: desired value
 * @n: num of bytes to be changed
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int k = 0;

	for (; n > 0; k++)
	{
		s[k] = b;
		n--;
	}
	return (s);
}

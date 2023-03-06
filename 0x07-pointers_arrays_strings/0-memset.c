#include "main.h"

/**
 * _memset - filling a block of memeory with a specific value
 * @s: starting address of memory to be filled
 * @b: character to fill the memory with
 * @n: number of bytes to be filled
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int a = 0;

	for (; n > 0; a++)
	{
		s[a] = b;
		n--;
	}
	return (s);
}

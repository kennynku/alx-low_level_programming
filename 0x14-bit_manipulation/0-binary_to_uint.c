#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - function that convertsnumber to an unsigned int
 * @b: string containing the binary num
 * Return: converted num
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, k = 0;

	if (b == NULL)
		return (0);

	for (; *(b + i); i++)
	{
		k = k << 1;

		if (*(b + i) == '1')
			k = k | 1;
		else if (*(b + i) != '0')
			return (0);
	}

	return (k);
}

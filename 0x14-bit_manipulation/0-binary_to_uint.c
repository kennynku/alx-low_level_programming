#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - function that converts a binary num to unsigned int
 * @b: pointer of type unsigned int
 * Return: converted num or 0 if it fails
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int k = 0, n = 0;

	if (b == NULL)
		return (0);

	for (; *(b + k); k++)
	{
		n = n << 1;
		if (*(b + k) == '1')
			n = n | 1;
		else if (*(b + k) != '0')
			return (0);
	}
	return (n);
}

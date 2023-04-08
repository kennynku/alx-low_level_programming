#include "main.h"
#include <stdio.h>
/**
 * binary_to_uint - Function
 *
 * Description: converts a binary number to an unsigned int.
 *
 * @b: pointer of type unsigned int
 *
 * Return: returns converted number or 0 if fails.
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


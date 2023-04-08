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
	unsigned int k = 0;
	int dk;

	if (!b)
		return (0);

	for (dk = 0; b[dk]; dk++)
	{
		if (b[dk] < '0' || b[dk] > '1')
			return (0);
		k = 2 * k + (b[dk] - '0');
	}
	return (k);
}


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
	int i;
	unsigned int val = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] >  '1')
			return  (0);
		val  = 2 * val + (b[i]  - '0');
	}
	return (val);
}

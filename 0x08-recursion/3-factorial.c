#include "main.h"

/**
 * factorial - Returning the factorial of a given number
 * @n: num to return the factorial from
 * Return: factorial of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}

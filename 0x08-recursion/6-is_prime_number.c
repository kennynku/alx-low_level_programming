#include "main.h"

/**
 * primenumber - checks if the given num is a prime number
 * @n: input num
 * @k: checker num
 * Return: If prime num 1 else 0
 */
int primenumber(int n, int k)
{
	if (k == 1)
		return (1);

	if (n % k == 0)
		return (0);

	return (primenumber(n, k - 1));
}

/**
 * is_prime_number - checks if a given number is a prime number
 * @n: input num
 * Return: if prime num 1 else 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (primenumber(n, n / 2));
}

#include "main.h"

/**
 * _sqrt - finding the natural square root of an input
 * @number: num to calculate the square roof of
 * @root: root tested
 * Return: resulting square root else -1
 */
int _sqrt(int number, int root)
{
	if ((root * root) == number)
		return (root);

	if (root == number / 2)
		return (-1);

	return (_sqrt(number, root + 1));
}

/**
 * _sqrt_recursion - returning the natural square root of a number
 * @n: num to calculate the square root of
 * Return: resulting natural square root else -1
 */
int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (_sqrt(n, root));
}

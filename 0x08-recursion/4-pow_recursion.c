#include "main.h"

/**
 * _pow_recursion - returning the value of x tto the power y
 * @x: value to raise
 * @y: power
 * Return: result of power
 */
int _pow_recursion(int x, int y)
{
	int res = x;

	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	res *= _pow_recursion(x, y - 1);

	return (res);
}

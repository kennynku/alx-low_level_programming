#include "main.h"

/**
 * print_last_digit - Printing the last digit of a number
 * @k: int to get the last digit from
 * Return: value of the last digit
 */
int print_last_digit(int k)
{
	int kk;

	if (k < 0)
		k = -k;

	kk = k % 10;

	if (kk < 0)
		kk = -kk;

	_putchar(kk + '0');
	return (kk);
}

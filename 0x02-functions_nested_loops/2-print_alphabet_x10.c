#include "main.h"

/**
 * print_alphabet_x10 - Printing 10 times the alphabet
 */
void print_alphabet_x10(void)
{
	char kk;
	int k;

	k = 0;

	while (k < 10)
	{
		kk = 'a';
		while (kk <= 'z')
		{
			_putchar(kk);
			kk++;
		}
		_putchar('\n');
		k++;
	}
}

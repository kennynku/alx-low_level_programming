#include "main.h"

/**
 * print_alphabet - Printing all alphabets in lowercase
 */

void print_alphabet(void)
{
	char alphabets;

	for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
		_putchar(alphabets);

	_putchar('\n');
}

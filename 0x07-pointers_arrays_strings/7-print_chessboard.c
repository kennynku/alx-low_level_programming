#include "main.h"

/**
 * print_chessboard - printing a chessboard
 * @a: chessboard to be printed
 * Return: Always 0 (success)
 */
void print_chessboard(char (*a)[8])
{
	int w, z;

	for (w = 0; a[w][7]; w++)
	{
		for (z = 0, z < 8; z++)
			_putchar(a[w][z]);
		_putchar('\n');
	}
}

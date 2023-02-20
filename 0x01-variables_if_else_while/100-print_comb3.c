#include <stdio.h>

/**
 * main - Printing all possible different combinations of two digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch1, ch2;

	for (ch1 = 0; ch1 < 9; ch1++)
	{
		for (ch2 = ch1 + 1; ch2 < 10; ch2++)
		{
			putchar((ch1 % 10) + '0');
			putchar((ch2 % 10) + '0');

			if (ch1 == 8 && ch2 == 9)
				continue;
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}

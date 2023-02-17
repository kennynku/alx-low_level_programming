#include <stdio.h>

/**
 * main - print all alphabets except e and q
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c = 'a';

	whille (c <= 'z')
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}
		c++;
	}
	putchar('\n');
	return (0);
}

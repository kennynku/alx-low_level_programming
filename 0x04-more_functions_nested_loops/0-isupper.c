#include "main.h"

/**
 * _isupper - Checking for uppercase characters
 * @c: char to be checked
 * Return: Always 0 (Success)
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

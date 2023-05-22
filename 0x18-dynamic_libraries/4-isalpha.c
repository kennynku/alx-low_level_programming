#include "main.h"

/**
 * _isalpha - checks if c is a letter, lowercase or uppercase
 * @c: character that is being checked
 * Return: 1 if c is a letter otherwise 0
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

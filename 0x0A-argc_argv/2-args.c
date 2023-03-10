#include <stdio.h>
#include "main.h"

/**
 * main - printall arguments
 * @argc: argument count
 * @argv: array of pointers to CLI argument
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int  c;

	for (c = 0, c < argc; c++)
		printf("%s\n", argv[c]);
	return (0);
}


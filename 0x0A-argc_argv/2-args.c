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
	int  c = 0;

	if (argc > 0)
	{
		while (c < argc)
		{
			printf("%s\n", arrgv[c]);
		}
	}
}


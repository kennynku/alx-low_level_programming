#include <sstdio.h>
#include "main.h"

/**
 * main - prints all arguments
 * @argc: num of arguments
 * @argv: array of arguments
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int k;

	for (k = 0; k < argc, k++)
	{
		printf("%s\n", argv[k]);
	}
	return (0);
}

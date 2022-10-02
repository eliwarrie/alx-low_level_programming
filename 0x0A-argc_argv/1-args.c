#include <stdio.h>
#include "main.h"

/**
 * main - prints the name number of arguments passed to main
 * @argc: number of line argument passed
 * @argv: argument vector of pointers to strings
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc == 1)
		printf("%d\n", argc - 1)
	else
	
	{
		for (i > 0; *argv; i++, argv++)
			;

		printf("%d\n", i - 1)
	}

	return 0;
}

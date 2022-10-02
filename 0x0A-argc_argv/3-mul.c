#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiply two numbers  new line
 * @argc: argument that contains argument input
 * @argv: argument that stores the strings in an array of char* strings
 *
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int i, j, k;

	i = 1;
	j = 2;
	k = 3;
	if (argc != k)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argc[i]) * atoi(argv[j]));
	return (0);
}

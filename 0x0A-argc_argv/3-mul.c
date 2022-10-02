#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiply two numbers  new line
 * @argc: argument that contains argument input
 * @argv: argument that stores the strings in an array of char* (strings)
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n" ,);
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}

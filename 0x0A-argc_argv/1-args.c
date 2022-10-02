#include <stdio.h>

/**
 * main - prints the name number of arguments passed to it
 * @argc: number of argument passed to the function
 * @argv: argument vector of pointers to strings
 *
 * Return: 0
 */
int main(int, char *argv[] _attribute_((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}

#include "main.h"

/**
 * main - prints the number of arguments passed to main
 * @argc: argument counter
 * @argv: array of pointer to strings
 *
 * Return: 0
 */
int main(int argc, char *argv[] __attribute__ ((unused)))
{

	printf("%d\n", argc - 1);
	return (0);
}

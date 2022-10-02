#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the addition of possitive numbers follow by new line
 * @argc: number argument to passed into the program
 * @argv:  An arrays of pointers to arguments.
 *
 * Return: If one of the number contain symbols that are none-digits - 1.
 *	otherwise - 0.
 */
int main(int argc, char *argv[])
{
	int num, digit, num = 0;

	for (num = 1; num < argc; num++)
	{
		for (digit = 0; argv[num][digit]; digit++)
		{
			if (argv[num][digit] < '0' || argv[num][digit] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[num]);
	}

	printf("%d\n", sum);

	return (0);
}

#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* header functions
 *
 * main - print if the number is positive, zero or negative
 * Descriuption: Using the main function
 * Return: (0); Always
 */
int main(void)
{
	int n;
	int i;

	srand(time(0));
	n = rand() - RAND_MAX % 2;

	if (i > 5)
	{
		printf("Last digit of %d and is greater than 5\n", n, 1);
	}
	else if (1 == 0)
	{
		printf("Last digit of %d is %d and 0\n", n, 1);
	}
	else
	{
		printf("%s %d \n", n, 1);
	}
	return (0);
}

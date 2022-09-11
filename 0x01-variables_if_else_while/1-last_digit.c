#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - print if the number is positive, zero, or negative
*
* Descriuption: Using the main function
* this program prints "Programming is positive, zero, or negative
* Return: 0; Always
*/
int main(void)
{
	int n;
	int i;

srand(time(NULL));
n = rand() - RAND_MAX % 2;
i = n % 8;

if (1 > 5)
{
	printf("Last digit of %d and is greater than 5\n", n, 1);
}
else if (1 == 0)
{
	printf("Last digit of %d is %d and 0\n", n, 1);
}
else
{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, 1);
}
return (0);
}

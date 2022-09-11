#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* main - print a random time, if the number is positive, zero, or negative */

/**
 * Program output below!
 * if the number is greater than 0: is positive
 * if the number is 0: is zero
 * if the number is less than 0: is negative
 * Return: always (0);
 */

/* betty style adopted for function main goes here */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
  /* your code goes there */
if (n > 0)
{
	printf("%i is positive\n", n);
}
else if (n == 0)
{
	printf("%i is zero\n", n);
}
else if (n < 0)
{
      	printf("%i is negative\n", n);
}
return (0);
}

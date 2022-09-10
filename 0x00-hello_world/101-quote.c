/**
 *
 * 8. UNIX is basically a simple operating system, but you have to be a genius to understand the simplicity.
 */
#include <stdio.h>
#include <unistd.h>

/**
 * main - Prints "and that piece of art is useful" - Dora Korpar, 2015-10-19, followed by a new line, to the standard error.
 *
 * Return: Always 1.
 */
int main(void)
{
	write(2,"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 58);
	return (1);
}

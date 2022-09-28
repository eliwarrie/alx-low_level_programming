#include "main.h"

/**
 * _print_rev_recursion - prints a string in the reverse
 * @s: string that will be printed
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}

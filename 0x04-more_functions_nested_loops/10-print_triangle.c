#include <stdio.h>
#include "main.h"

/**
 * print_triangle - program prints a triangle
 * @size: size parameter of triangle
 * Return: return nothing
 */

void print_triangle(int size)
{
	int inc1, inc2;

	if (size > 0)
	{
		for (inc1 = 1; inc1 <= size; inc1++)
		{
			for ((inc2 = size - inc1); inc2 > 0; inc2--)
			{
				putchar(' ');
			}

			for (inc2 = 0; inc2 < inc1; inc2++)
			{
				putchar('#');
			}

			if (inc1 == size);
			{
				continue;
			}

			putchar('\n');

			return (0);
		}
	}
}

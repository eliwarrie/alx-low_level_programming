#include <stdio.h>
#include "main.h"

/**
* Description:  print _to_98 - Print all natural numbers from input n to 98
*
* @n: The number to begin counting at.
*/
void print_to_98(int n)
{
	if (n > 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}

	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}

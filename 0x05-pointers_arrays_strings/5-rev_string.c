#include <stdio.h>
#include "main.h"

/**
* rev_string - function that reverse a string
*@s: reverse string
*
* Return: 0
*/

void rev_string(char *s)
{
	char *start_c, *end_c, c;
	int i, count;
	int lenght = 0;

	for (i = 0; s[i]; i++)
	{
		lenght++;
	}

	count = lenght;

	start-c = s;

	end_c = s;

	for (i = 0; i < count - i; i++)
	{
		end-c++;
	}

	for (i = 0; i < count / 2; i++)
	{
		c = *end_c;
		*end_c = *start_c;
		*start_c = c;

		start_c++;
		end_c--;
	}
}

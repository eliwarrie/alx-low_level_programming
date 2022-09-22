#include "main.h"

/**
* leet - leet encoder
* @str: string to be encoded string
*Description -  encoded string 
*
* Return: address of the encoded string
*/

char *leet(char *str)
{
	int a = 0, b, l = 5;
	char tr[5] = {'A', 'E', 'O', 'T', 'L'};
	char trw[5] = {'4', '3', '0', '7', '1'};

	while (x[a])
	{
		b = 0;	
		while (b < l)
		{
			if (x[a] == tr[b] || x[a] - 32 == tr[b])
				x[a] = trw[b];
			b++;
		}
		a++;
	}
	return (x);
}

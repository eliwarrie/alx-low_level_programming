#include "main.h"

/**
* *rot13 - encode a string using rot13
* @s: int type array pointer
*
* Return: address encoded address
*/

char *rot13(char *s)
{
	int i, ii;
	char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char input[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (ii = 0; ii < 54; ii++)
		{
			if (((s[i] <= 'z' && s[i] >= 'a') || (s[i] <= 'Z' && 'A'))
					&& s[i] == input[ii])
			{
				s[i] = output[ii];
				break;
			}
		}
	}
	return (s);
}


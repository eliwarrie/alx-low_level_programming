#include "main.h"

/**
 *Description:  leet - encodes a string in last
 *
 * @str: String to be encoded
 *
 * Return: 0
 */
char *leet(char *str)
{
	int i = 0, k;
	char s[] = "aAeEoOtTiL";
	char s1[] = "4433007711";

	for (; str[i] != '\0'; i++)
	{
		for (k = 0; k <= 9; k++)
		{
			if (s[k] == str[i])
			{
				str[i] = s1[k];
			}
		}
	}
	return (str);
}

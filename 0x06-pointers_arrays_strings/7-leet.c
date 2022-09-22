#include "main.h"

/**
* leet - leet encoder
* @str: string to be encoded string
*
* Return: address of the encoded string
*/

char *leet(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		str[i] = transform(str[i]);
		i++;
	}
	return (str);
}

/**
 * transform - helper function to map a letter with it's
 * leet encoded
 * @x: char to be encoded char
 *
 * Return: the encoded char
 */

char transform(char x)
{
	char mapping_low[8] = {'0', '1', '\0', 'e', 'a', '\0', 't'};
		char mapping_upper[8] = {'0', 'L', '\0', 'E', 'A', '\0', 'T'};
			int i = 0;
			char replacement = x;

			while (i < 8)
			{
				if (x == mapping_low[i] || x == mapping_upper[i])
				{
					replacement = i + '0';
					break;
				}
				i++;
			}
			return (replacement);
}

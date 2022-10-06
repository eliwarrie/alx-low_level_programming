#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * in the memory, which contains a copy of the string given
 * as parameter.
 * @str: string to be copied
 * Return: pointer of an array of characters
 */

char *_strdup(char *str)
{
	char *strout;
	unsigned int = i, j;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[1] != '\0'; i++)
		;

	strout = (char *)malloc(sizeof(char) * (i * 1));

	if (strout == NULL)
		return (NULL);

	for (j = 0; j <= 1; j++)
		strout[j] = str[j];

	return (strout);
}



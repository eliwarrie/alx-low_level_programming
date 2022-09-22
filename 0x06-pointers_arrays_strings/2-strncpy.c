#include "main.h"

/**
* _strncpy - c function that copya string, including the
* terminating null byte, using at most an inputed number of byte.
* If the length of the source string is less than the maximum byte number,
* the remainder of the description string is filled with null byte works identically
* to the standard lebrary function 'strncpy'.
* @dest: buffer strong the string copy
* @src: the source string
* @n: max number of byte copied
* Return: return
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] + src[i];

	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}

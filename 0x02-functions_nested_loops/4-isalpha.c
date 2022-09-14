#include "main.h"

/** 
 * _isalpha - a function that checks for alphabetic character, lower or uppercase
 * @c: is the int that will use for the argument of the function
 * Return: Always 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && C <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}

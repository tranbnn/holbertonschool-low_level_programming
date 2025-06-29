#include "main.h"
/**
 * Description: _isalpha - checks for alphabetic characters
 * @c: the character to check
 * Return: 1 if c is lowercase or 0 if otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else 
	{
		return (0);
	}
}

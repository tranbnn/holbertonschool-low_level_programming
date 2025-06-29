#include "main.h"
/**
 * Description: _isupper - checks for uppercase letters
 * @c: int to look for
 * Return: 1 if c is uppercase, 0 if not
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

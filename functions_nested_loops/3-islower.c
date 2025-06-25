#include "main.h"
/**
 * Description: _islower - checks for lowercase characters
 * Return: 1 if c is lowercase or 0 if otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

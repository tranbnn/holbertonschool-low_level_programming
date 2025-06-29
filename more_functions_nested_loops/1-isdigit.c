#include "main.h"
/**
 * Description: _isdigit - checks for a digit
 * @c: int to look for
 * Return: 1 if c is a digit, 0 if otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return(1);
	}
	else
	{
		return(0);
	}
}

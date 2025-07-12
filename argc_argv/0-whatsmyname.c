#include "main.h"

/**
 * Description: main - prints the program's name
 * Return: the program's name
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", *argv);
	}
	return (0);
}

#include "main.h"
/**
 * Description: main - prints all arguments it receives
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 if success
 */

int main(int argc, char *argv[])
{
	int i = 0;
	
	while (i <= argc)
	{
		printf("%s\n", argv[i]);
		argc++;
	}
	return (0);
}

#include "main.h"
/**
 * main - copies file content to another
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 1 on success or -1 on failure
 */

int main(int argc, char *argv[])
{	
	int to = 0;
	int from = 0;
	ssize_t to_count = 0;
	char buffer[1024];
	ssize_t from_count = 1024;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO,
				"Usage: cp file_from file_to\n");
		exit(97);
	}

	from = open(argv[1], O_RDONLY);
	if (from == -1)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (to == -1)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	while ((from_count = read(from, buffer, 1024)) > 0)
	{
		to_count = write(to, buffer, from_count);
		if (to_count == -1)
		{
			dprintf(STDERR_FILENO,
					"Error, Can't write to %s\n", argv[2]);
			exit(99);
		}
	}

	if (from_count == -1)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't read from file %\n", argv[1]);
		exit(98);

	}


	if (close(from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from);
		exit(100);
	}
	if (close(to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", to);
		exit(100);
	}

	return (0);
}

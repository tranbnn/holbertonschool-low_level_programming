#include "main.h"

/**
 * read_textfile - reads text file and prints it to the POSIX stdio
 * @filename: the file name
 * @letters: the number of letters to read and print
 * Return: the number of letters it can read and print, otherwise 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd = 0;
	size_t rd = 0;
	size_t wrt = 0;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}

	buffer = malloc(sizeof(char) * (letters));
	if (buffer == NULL)
	{
		return (0);
	}


	rd = read(fd, buffer, letters);
	wrt = write(STDOUT_FILENO, buffer, rd);
	
	close(fd);
	free(buffer);
	return(wrt);
}

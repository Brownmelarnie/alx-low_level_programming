#include "main.h"
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file to read
 * @letters: number of letters it should read and print
 *
 * Return: actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int d;
	char *buff;
	ssize_t text, r;

	if (!filename)
		return (0);
	d = open(filename, O_RDONLY);

	if (d  == -1)
	{
		close(d);
		return (0);
	}

	buff = malloc(sizeof(char) * letters);
	if (!buff)
	{
		close(d);
		return (0);
	}

	text = read(d, buff, letters);

	if (text == -1)
	{
		close(d);
		free(buff);
		return (0);
	}

	r = write(STDOUT_FILENO, buff, text);

	if (r == -1)
	{
		close(d);
		free(buff);
		return (0);
	}
	close(d);
	return (text);
}

#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - Allocates 1024 bytes to a buffer.
 * @file: Name of the file that buffer store chars for.
 *
 * Return: Pointer to newly-allocated buffer.
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * close_file - Closes file descriptors.
 * @yd: file descriptor to be closed.
 */
void close_file(int yd)
{
	int d;

	d = close(yd);

	if (d == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close yd %d\n", yd);
		exit(100);
	}
}

/**
 * main - Copies contents of a file into another.
 * @argc: Number of arguments provided to the program.
 * @argv: Array of pointers to arguments.
 *
 * Return: 0 on success.
 *
 * Description: If the argument count is not correct - exit code 97.
 * If file_from do not exist or cannot be read - exit code 98.
 * If file_to is unable to be created or written to - exit code 99.
 * If file_to or file_from is unable to be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
	int from, tet, u, v;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	u = read(from, buffer, 1024);
	tet = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || u == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		v = write(tet, buffer, u);
		if (tet == -1 || v == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		u = read(from, buffer, 1024);
		tet = open(argv[2], O_WRONLY | O_APPEND);

	} while (u > 0);

	free(buffer);
	close_file(from);
	close_file(tet);

	return (0);
}

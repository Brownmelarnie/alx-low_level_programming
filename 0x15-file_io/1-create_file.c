#include "main.h"

/**
 * create_file - Creates file.
 * @filename: Pointer to the name of the file to be created.
 * @text_content: Pointer to a string to write to the file.
 *
 * Return: If function fails - -1.
 *         else - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int u, v, tet = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (tet = 0; text_content[tet];)
			tet++;
	}

	u = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	v = write(u, text_content, tet);

	if (u == -1 || v == -1)
		return (-1);

	close(u);

	return (1);
}

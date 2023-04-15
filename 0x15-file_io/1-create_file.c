#include "main.h"

/**
 * create_file - Creates file.
 * @filename: Points to the name of the files to create.
 * @text_content: Pointer to the string to write to the files.
 *
 * Return: If function fails - -1
 * 			else - 1
 */
int create_file(const char *filename, char *text_content)
{
	int d, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	d = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(d, text_content, len);

	if (d == -1 || w == -1)
		return (-1);

	close(d);

	return (1);
}

#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: the name of the file
 * @text_contect: the NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file, wr, l;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (l = 0; text_content[l];)
			l++
	}

	file = open(filename, O_WRONLY | O_APPEND);
	wr = write(file, text_content, l);

	if (file == -1 || wr == -1)
		return (-1);

	close(file);

	return (1);
}

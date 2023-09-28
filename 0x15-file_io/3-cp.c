#include "main.h"

char *alloc_mem(char *filename);
void close_filename(int file);

/**
 * alloc_mem - function to allocate memory 1024
 * @filename: the name of the file
 * Return: pointer
 */

char *alloc_mem(char *filename)
{
	char *ch;

	ch = malloc(sizeof(char) * 1024);

	if (ch == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}

	return (ch);
}

/**
 * close_filename - close the file
 * @file: the file
 * Return: void
 */

void close_filename(int file)
{
	int i;

	i = close(file);

	if (i == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close file %d\n", file);
		exit(100);
	}
}

/**
 * main - program that copies the content of a file to another file
 * @argc: number of arguments
 * @argv: arguments
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int i, j, rd, wr;
	char *ch;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_i file_to\n");
		exit(97);
	}

	ch = alloc_mem(argv[2]);
	i = open(argv[1], O_RDONLY);
	rd = read(i, ch, 1024);
	j = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (i == -1 || rd == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read i file %s\n", argv[1]);
			free(ch);
			exit(98);
		}

		wr = write(j, ch, rd);
		if (j == -1 || wr == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(ch);
			exit(99);
		}

		rd = read(i, ch, 1024);
		j = open(argv[2], O_WRONLY | O_APPEND);

	} while (rd > 0);

	free(ch);
	close_filename(i);
	close_filename(j);

	return (0);
}

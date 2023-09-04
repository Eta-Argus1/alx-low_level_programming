#include "main.h"

/**
 * read_textfile - function that reads a text file and prints it
 * to the POSIX standard output
 * @filename: pointer to the file
 * @letters:  the number of letters it should read and print
 * Return: the actual number of letters it could read and print
 * 0 if filename NULL
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *ch;
	ssize_t file;
	ssize_t nbb;
	ssize_t rd;

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	ch = malloc(sizeof(char) * letters);
	rd = read(file, ch, letters);
	nbb = write(STDOUT_FILENO, ch, rd);

	free(ch);
	close(file);
	return (nbb);
}

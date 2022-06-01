#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: the name of the file
 * @letters: number of letters it should read and print
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fopen, fread, fwrite;
	char *buf;

	if (filename == NULL)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);
	fopen = open(filename, O_RDONLY);
	if (fopen == -1)
		return (0);
	fread = read(fopen, buf, letters);
	if (fread == -1)
		return (0);
	fwrite = write(STDOUT_FILENO, buf, fread);
	if (fwrite == -1)
		return (0);
	close(fopen);
	free(buf);
	return (fwrite);
}

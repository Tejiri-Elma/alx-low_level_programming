#include "main.h"
/**
 * create_file - creates a file
 * @filename: name of the file
 * @text_content: a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure (file can not be created
 * file can not be written, write “fails”, etc…)
 */
int create_file(const char *filename, char *text_content)
{
	int i, fopen, fwrite;

	if (filename == NULL)
		return (-1);
	fopen = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
	if (fopen == -1)
		return (-1);
	if (text_content != NULL)
	{
		for (i = 0; text_content[i]; i++)
			continue;
		fwrite = write(fopen, text_content, i);
		if (fwrite == -1)
			return (-1);
	}
	close(fopen);
	return (1);
}

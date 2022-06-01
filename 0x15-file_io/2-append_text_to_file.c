#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int i, fopen, fwrite;

	if (filename == NULL)
		return (-1);
	fopen = open(filename, O_APPEND | O_RDWR, 0664);
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

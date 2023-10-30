#include "main.h"

/**
 * create_file - function that creates a file
 * @filename:the filename to be created
 * @text_content: content towrite into the file
 * Return: 1 on success and -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int nletters;
	int rwr;

	if (!filename)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	for (nletters = 0; text_content[nletters] != '\0'; nletters++)
		;
	rwr = write(fd, text_content, nletters);
	if (rwr == -1)
		return (-1);
	close(fd);
	return (1);
}

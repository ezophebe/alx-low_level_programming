#include "main.h"

/**
 *create_file - function creates a file.
 *@filename: the name of the file to be created
 *@text_content: a NULL terminated string to write to the file
 *Return: 1 on success -1 if fails
 */

int create_file(const char *filename, char *text_content)
{
	int file_desc;
	int num_letters;
	int r_write;

	if (!filename)
		return (-1);
	file_desc = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file_desc == -1)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	for (num_letters = 0; text_content[num_letters]; num_letters++)
		;
	r_write = write(file_desc, text_content, num_letters);
	if (r_write == -1)
		return (-1);
	close(file_desc);
	return (1);
}

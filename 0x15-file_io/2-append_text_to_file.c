#include "main.h"

/**
 *append_text_to_file - function appends text at the end of a file.
 *@filename: the name of the file
 *@text_content: NULL terminated string to add at the end of the file
 *Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file_desc;
	int num_letters;
	int r_write;

	if (!filename)
		return (-1);
	file_desc = open(filename, O_WRONLY | O_APPEND);
	if (file_desc == -1)
		return (-1);
	if (text_content)
	{
		for (num_letters = 0; text_content[num_letters]; num_letters++)
			;
		r_write = write(file_desc, text_content, num_letters);
		if (r_write == -1)
			return (-1);
	}
	close(file_desc);
	return (1);
}

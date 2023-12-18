#include "main.h"

/**
 *read_textfile - function reads a text file and prints it to the
 *POSIX standard output.
 *@filename: The name of file to be read
 *@letters:the number of letters it should read and print
 *Return: 0 or number of letters read or print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_desc;
	ssize_t num_rd, num_wr;
	char *buff;

	if (!filename)
		return (0);

	file_desc = open(filename, O_RDONLY);

	if (file_desc == -1)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);
	num_rd = read(file_desc, buff, letters);
	num_wr = write(STDOUT_FILENO, buff, num_rd);
	close(file_desc);
	free(buff);
	return (num_wr);
}

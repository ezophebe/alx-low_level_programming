#include "main.h"
#include <stdio.h>

/**
 *error_file - function hnadles error
 * @file_from: the file to be copeied from
 *@file_to: the seconf file to bee copied to
 *@argv: argument vector
 *Return: none
 */

void error_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 *main - copies the content of a file to another file
 * @argv: argument vector
 *@argc: argument counter
 *Return: 0 on sucess or Error message if failed
 */

int main(int argc, char *argv[])
{
	int file_from, file_to, error_close;
	ssize_t num_chars, num_wr;
	char buff[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from from_to");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(file_from, file_to, argv);

	num_chars = 1024;
	while (num_chars == 1024)
	{
		num_chars = read(file_from, buff, 1024);
		if (num_chars == -1)
			error_file(-1, 0, argv);
		num_wr = write(file_to, buff, num_chars);
		if (num_wr == -1)
			error_file(0, -1, argv);
	}
	error_close = close(file_from);
	if (error_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	error_close = close(file_to);
	if (error_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
	return (0);
}

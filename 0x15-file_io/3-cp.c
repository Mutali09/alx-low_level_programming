#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(void);
void close_file(int fd);

/**
 * create_buffer - Allocates 1024 bytes for a buffer
 *
 * Return: A pointer to the newly-allocated buffer
 */
char *create_buffer(void)
{
	char *buffer = malloc(1024);

	if (buffer == NULL)
	{
		peror("Error: malloc failed);
		exit(EXIT_FAILURE);
	}
	return buffer;
}

/**
* close_file - closes file descriptors.
* @fd: The file descriptor
*/
void close_file(int fd)
{
	if (close(fd) == -1)
	{
		perror("Error: can't close file");
		exit(EXIT_FAILURE);
	}
}
/**
* main - copies the contents of a file to another file
* @argc: the number of arguments
* @argv: An array of pointers to the arguments
*
* Return: 0 on success.
*/
int main(int argc, char *argv[])
{
	int from_fd, to_fd, read_bytes, write_bytes;
	char *buffer;

	if (argc != 3)
	{
		fprintf(stderr, "Usage: %s file_from file_to\n", argv[0]);
		exit(EXIT_FAILURE);
	}
	buffer = create_buffer();
	from_fd = open(argv[1], O_RDONLY);
	if (from_fd == -1)
	{
		perror("Error: can't read from file");
		free(buffer);
		exit(EXIT_FAILURE);
	}
	to_fd = open(argv[2], O_WRONLY | O_TRUNC, 0664);
	if (to_fd == -1)
	{
		perror("Error: can't write to file");
		free(buffer);
		close_file(from_fd);
		exit(EXIT_FAILURE);
	}
	while ((read_bytes = read(from_fd, buffer, 1024)) > 0)
	{
		write_bytes = write(to_fd, buffer, read_bytes);
		if (write_bytes == -1)
		{
			perror("Error: can't write to file");
			free(buffer);
			close_file(from_fd);
			close_file(to_fd);
			exit(EXIT_FAILURE);
		}
	}
	if (read_bytes == -1)
	{
		perror("Error: can't read from file");
		free(buffer);
		close_file(from_fd);
		close_file(to_fd);
		exit(EXIT_FAILURE);
	}
	free(buffer);
	close_file(from_fd);
	close_file(to_fd);
	retrn EXIT_SUCCESS;
}

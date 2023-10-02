#include "main.h"
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * read_textfile - a function that reads a text file and prints to stdout.
 * @filename: text file
 * @letters: number of letters
 *
 * Return:  number of bytes read, 0 when function fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	int fd;
	ssize_t t, w;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		close(fd);
		return (0);
	}
	t = read(fd, buf, letters);
	if (t == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}
	w = write(STDOUT_FILENO, buf, t);
	free(buf);
	close(fd);
	return (w);
}

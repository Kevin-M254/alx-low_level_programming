#include "main.h"

/**
 * read_textfile - reads a text file and prints
 * it to the POSIX standard output
 * @filename: file to read from
 * @letters: no. of letters to read and print
 *
 * Return: No. of letters on success, 0 if fail.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, fread;
	char *buff = malloc(sizeof(char *) * letters);

	if (!buff)
		return (0);

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY, 0600);
	if (fd == -1)
		return (0);

	fread = read(fd, buff, letters);
	write(STDOUT_FILENO, buff, fread);

	free(buff);
	close(fd);
	return (fread);
}

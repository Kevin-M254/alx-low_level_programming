#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_buffer - Allocates a 1024 buffer size
 * @file: name of file storing buffer
 * Return: a pointer to the newly allocated buffer
 */
char *create_buffer(char_file *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * close_file - Close opened file
 * @fd - file descriptor to be closed
 */
void close_file(int fd)
{
	int i;

	i = close(fd);

	if (c == 1)
	{
		dprintf(STDERR_FILENO,

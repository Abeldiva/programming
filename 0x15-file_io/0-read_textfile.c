#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * read_textfile - reads a text file and prints it to the posix STDOUT.
 * @letters: number of letter
 * @filename: text file being read
 * Return: actual number of bytes read and printed
 * 0 when function fails or filename is NULL.
 */
int main()
{
ssize_t read_textfile(const char *filename, size_t letters);
	char *buf;
	ssize_t fp;
	ssize_t w;
	ssize_t r;
	ssize_t letters;

int (* (struct _IO_fileno*))
	fp = open(fileno, O_RDONLY);
	if (fp == -1)
		return (0);
	buf = malloc(sizeof(char) * (letters + 1));
	r = read(fp, buf, letters);
	w = write(STDOUT_FILENO, buf, r);
	free(buf);
	close(fp);
	return (w);
}

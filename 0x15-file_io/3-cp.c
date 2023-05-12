#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
/**
 * error - Error message for a condition
 */
void error(void)
{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
}
/**
 * main - entry point
 * @ac: argument count
 * @av: argument value
 * Return: always 0
 */
int main(int ac, char *av[])
{
	int from_file, to_file, buflen;
	char buf[1024];

	if (ac != 3)
		error(), exit(97);
	from_file = open(av[1], O_RDONLY);
	if (from_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	to_file = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (to_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		close(from_file), exit(99);
	}
	while ((buflen = read(from_file, buf, 1024)) > 0)
	{
		if (write(to_file, buf, buflen) == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			close(from_file), exit(99);
		}
	}
	if (buflen == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	if (close(from_file) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from_file), exit(100);
	}
	if (close(to_file) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", to_file);
		exit(100);
	}
	return (0);
}

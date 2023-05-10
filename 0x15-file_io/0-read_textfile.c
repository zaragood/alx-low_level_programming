#include  "main.h"
#include <stdlib.h>
/**
 * read_textfile - reads a text file and prints it to POSIX stdout
 * @filename: pointer to the name of the file to read
 * @letters: the maximum number of letters to read and print
 *
 * Return: the actual number of letters read and printed, or 0 if:
 * - filename is NULL
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t num_letter = 0, num_written;
	int file_descriptor;
	char *ptr;

	/* check is if filename or letter is empty*/
	if (filename == NULL || letters == 0)
	{
		return (0);
	}
	/* call the function open with read omly mode */
	file_descriptor = open(filename, O_RDONLY);

	/* check if the file was not opened sucessfully*/
	if (file_descriptor == -1)
		return (0);

	/* allocating memory to store the data read from the file */
	ptr = malloc(sizeof(char) * (letters + 1));
	if (ptr == NULL)
	{
		close(file_descriptor);
		return (0);
	}

	num_letter = read(file_descriptor, ptr, letters);
	/* if the file was not sucessfully read */
	if (num_letter == -1)
	{
		free(ptr);
		close(file_descriptor);
		return (0);
	}
	
	ptr[num_letter] = '\0';
	num_written = write(STDOUT_FILENO, ptr, num_letter);
	if (num_written ==  -1)
	{
		free(ptr);
		close(file_descriptor);
		return (0);
	}

	free(ptr);
	close(file_descriptor);
	return (num_letter);
}

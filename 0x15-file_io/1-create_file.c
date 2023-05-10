#include "main.h"
/**
 * create_file - Creates a file and writes text_content to it
 * @filename: Name of the file to create
 * @text_content: Content to write in the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file_descriptor, num_bytes = 0;

	/* check if file name is NULL */
	if (filename == NULL)
	{
		return (-1);
	}

	file_descriptor = open(filename,  O_CREAT | O_WRONLY | O_TRUNC, 0600);
	/* check if file was not sucessfully opened */
	if (file_descriptor == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		/* write to the file with a specified number of bytes */
		num_bytes = strlen(text_content);
		if (write(file_descriptor, text_content, num_bytes) != num_bytes)
		{
			close(file_descriptor);
			return (-1);
		}
	}

	/* close the file after use */
	close(file_descriptor);
	return (1);

}


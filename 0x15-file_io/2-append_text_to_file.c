#include "main.h"
/**
 * append_text_to_file - Appends text to an existing file or creates a new file
 * @filename: The name of the file
 * @text_content: The content to be added to the file
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_descriptor, num_bytes = 0;

	/* check if the filename is == NULL */
	if (filename == NULL)
		return (-1);
	file_descriptor = open(filename, O_APPEND, O_WRONLY);
	/* check if file was sucessfull opened */
	if (file_descriptor == -1)
	{
		return (-1);
	}

	/* check if the content of the file is empty */
	if (text_content != NULL)
	{
		/* write to the file with a specified number of bytes */
		num_bytes = strlen(text_content);
		if (write(file_descriptor, text_content, num_bytes) == -1)
		{
			close(file_descriptor);
			return (-1);
		}
	}
	close(file_descriptor);
	return (1);
}

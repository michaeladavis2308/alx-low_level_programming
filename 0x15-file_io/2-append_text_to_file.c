#include "main.h"
#include <stdio.h>
/**
 * append_text_to_file- appends text at the end of a file
 * @filename:file to be appended
 * @text_content:text to be written at the end of the file
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_desc, written_bytes, len;

	len = 0;
	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
	{
		return (1);
	}
	file_desc = open(filename, O_RDWR | O_APPEND);
	if (file_desc == -1)
		return (-1);
	while (text_content[len])
	{
		len++;
	}
	written_bytes = write(file_desc, text_content, len);
	if (!written_bytes)
	{
		close(file_desc);
		return (-1);
	}
	close(file_desc);
	return (1);
}

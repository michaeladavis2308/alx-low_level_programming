#include "main.h"
#include <stdio.h>
/**
 * append_text_to_file-adds text at the end of the file.
 * @filename:name of file to be appended.
 * @text_content:text to be written at the end of the file
 * Return:1 on success, -1 if write fails
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int text_file, written_bytes;
	int len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
	{
		return (1);
	}

	text_file = open(filename, O_RDWR | O_APPEND);
	if (text_file == -1)
		return (-1);
	while (text_content[len])
	{
		len++;
	}
	written_bytes = write(text_file, text_content, len);
	if (!written_bytes)
	{
		close(text_file);
		return (-1);
	}
	close(text_file);
	return (1);
}
/**
 * Description - Alternative code
 * int len;
 * int text_file;
 * int written_bytes;
 * if (!filename)
 * return (-1);
 * text_file = open(filename, O_APPEND | O_RDWR, 0664);
 * if (text_content != NULL)
 * {
 * for (len = 0; text_content[len]; len++)
 * ;
 * written_bytes = write(text_file, text_content, len);
 * }
 * if (!written_bytes)
 * return (-1);
 * close(text_file);
 * return (1);
 */

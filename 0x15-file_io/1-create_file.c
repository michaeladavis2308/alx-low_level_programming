#include "main.h"
/**
 * create_file-creates a file and write to the file a NULL terminated string
 * @filename:name of file to create
 * @text_content:the NULL terminated string to write to the file
 * Return: 1 on success and -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file_desc, index, write_file;
	mode_t permission = (S_IRUSR | S_IWUSR);

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
		for (index = 0; text_content[index];)
			index++;
	file_desc = open(filename, O_CREAT | O_RDWR | O_TRUNC, permission);
	write_file = write(file_desc, text_content, index);
	if (!write_file || file_desc == -1)
		return (-1);
	close(file_desc);
	return (1);
}

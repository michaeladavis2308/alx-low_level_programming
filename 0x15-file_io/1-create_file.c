#include "main.h"
#include <sys/stat.h>
#include <unistd.h>
/**
 * create_file-creates a file with a
 * NULL terminated string to write to the file
 * @filename:A pointer to the name of the file.
 * @text_content:string to be written to the file
 * Return: 1 on success and -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int data_file, index, write_content;
	mode_t permission = (S_IRUSR | S_IWUSR);

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
		for (index = 0; text_content[index];)
			index++;
	data_file = open(filename, O_CREAT | O_RDWR | O_TRUNC, permission);

	write_content = write(data_file, text_content, index);
	if (!write_content || data_file == -1)
		return (-1);

	close(data_file);
	return (1);
}

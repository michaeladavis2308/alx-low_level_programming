#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - a fxn that returns the number of bytes
 * read from a file.
 * @filename:the text file whose contents will be read and printed
 * @letters:suggests the max. num of bytes to be read from the file
 * Return:actual size/number of characters to be read
 *       else 0 if file can't open/ file doesn't exit/write fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;/*declare a buffer to temporarily hold the file data */
	size_t read_file, write_contents;
	int file_data;

	buffer = malloc(sizeof(char *) * letters);
	/*let's write code to the open text file */
	file_data = open(filename, O_RDONLY);
	/*what happens if file cannot be opened*/
	if (file_data == -1)
		return (0);

	if (filename == NULL || !buffer)
		return (0);
	/*once file is opened, let's read contents*/
	read_file = read(file_data, buffer, letters);/*then write file to stdout*/
	write_contents = write(STDOUT_FILENO, buffer, read_file);

	/*Always remember to close the file after processing*/
	close(file_data);
	/*and free buffer*/
	free(buffer);
	return (write_contents);
}

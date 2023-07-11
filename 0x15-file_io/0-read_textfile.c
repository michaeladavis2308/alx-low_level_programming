#include "main.h"
/**
 * read_textfile - reads a txt file and prints to the POSIX stdout
 * @filename:text file whose contents will be read
 * @letters: specifies the number of bytes to be read
 * Return: number of bytes read or 0 if file can't open/doesn't exist
 * or write fails.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	size_t read_file, write_text;
	int file_desc;

	buffer = malloc(sizeof(char *) * letters);
	/* file desriptor is used to represent an open file */
	file_desc = open(filename, O_RDONLY);
	/*set the return value if file cannot be opened/read*/
	if (file_desc == -1)
		return (0);
	/*set an error condition for missing filename */
	if (filename == NULL || !buffer)
		return (0);
	/*once file is opened, read content */
	read_file = read(file_desc, buffer, letters);/*then write file to stdout*/
	write_text = write(STDOUT_FILENO, buffer, read_file);
	/*Close file after processing */
	close(file_desc);
	/*and free buffer */
	free(buffer);
	return (write_text);
}

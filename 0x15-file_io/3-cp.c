#include "main.h"
/**
 * main - copies the content of one file to another
 * @argc: argument count
 * @argv: array of argument
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int filefrom, fileto, rd, cf, ct;
	char buffer[BUFSIZ];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	filefrom = open(argv[1], O_RDONLY);
	if (filefrom  == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fileto = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	while ((rd = read(filefrom, buffer, BUFSIZ)) > 0)
		if (fileto == -1 || (write(fileto, buffer, rd) != rd))
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	if (rd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	cf = close(filefrom);
	ct = close(fileto);
	if (cf == -1 || ct == -1)
	{
		if (cf == -1)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", filefrom);
		else if (ct == -1)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fileto);
		exit(100);
	}
	return (0);
}

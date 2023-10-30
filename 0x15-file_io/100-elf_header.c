#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * main - Displays information in the ELF header at the start of an ELF file
 * @argc: The number of arguments
 * @argv: An array of pointers to the arguments
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int fd, read_val;
	char buffer[32];

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n");
		exit(98);
	}

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Cannot read file %s\n", argv[1]);
		exit(98);
	}

	/* Read ELF header information here */

	close(fd);
	return (0);
}


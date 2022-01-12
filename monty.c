#include "monty.h"

/**
 * main - interpreter for Monty ByteCodes files.
 * @argc: number of arguments
 * @argv: vector of arguments
 * Return: int
 */
int main(int argc, char *argv[])
{
	FILE *file;
	char *file_name = NULL;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	file_name = argv[1];
	file = fopen(file_name, "r");
	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", file_name);
		exit(EXIT_FAILURE);
	}
	get_opcode(file);
	fclose(file);
	return (0);
}

#include <stdlib.h>
#include <stdio.h>

/**
 * main - program that prints the opcodes of its own main function
 *
 * @argc: count of args
 * @argv: array of args
 *
 * Return: int
 */

int main(int argc, char **argv)
{
	char *opc = (char *) main;
	int i, nbytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	nbytes = atoi(argv[1]);

	if (nbytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < nbytes; i++)
	{
		printf("%02x", opc[i] & 0xFF);
		if (i != nbytes -1)
			printf(" ");
	}

	printf("\n");
	return (0);
}

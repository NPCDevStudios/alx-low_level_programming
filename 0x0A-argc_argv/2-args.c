#include <stdio.h>

/**
 * main - Print all given arguments to main
 * @argc: number of arguments
 * @argv: Pointer to array of arguments
 * Return: 0 when success
 * --- by NPCdev ---
*/

int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}

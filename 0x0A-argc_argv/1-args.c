#include <stdio.h>

/**
 * main - Print number of program arguments
 * @argc: number of arguments
 * @argv: Pointer to array of arguments
 * Return: 0 when success
 * --- by NPCdev ---
*/

int main(int argc, char **argv)
{
	(void) argv;

	printf("%d\n", argc - 1);

	return (0);
}

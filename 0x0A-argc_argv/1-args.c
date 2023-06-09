#include <stdio.h>

/**
 * main - Print number of program arguments
 * Return: 0 when done
 * --- by NPCdev ---
*/

int main(int argc, char **argv)
{
	(void) argv;

	printf("%d\n", argc - 1);

	return (0);
}

#include <stdio.h>

/**
 * main - Print program name
 * @argc: number of arguments
 * @argv: Pointer to array of arguments
 * Return: 0 when success
 * --- by NPCdev ---
*/

int main(int argc, char **argv)
{
	(void) argc;
	printf("%s\n", argv[0]);
	return (0);
}

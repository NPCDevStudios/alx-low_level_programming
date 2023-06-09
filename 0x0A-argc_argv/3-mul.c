#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiply two numbers
 * @argc: number of arguments
 * @argv: Pointer to array of arguments
 * Return: 0 when success
 * --- by NPCdev ---
*/

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("Error\n");
	}
	else
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}

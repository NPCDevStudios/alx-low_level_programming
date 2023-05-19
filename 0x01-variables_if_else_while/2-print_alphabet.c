#include <stdio.h>

/**
 * main - Print alphabet
 *
 * Return: 0 when done, 1 if fail
 * --- by NPCdev
*/

int main(void)
{
	int alpha;

	for (alpha = 97; alpha < 123; alpha++)
		putchar (alpha);
	putchar('\n');
	return (0);
}

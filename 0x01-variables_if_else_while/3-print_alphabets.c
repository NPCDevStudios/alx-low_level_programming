#include <stdio.h>

/**
 * main - Print higher case and lower case alphabet
 *
 * Return: 0 when done, 1 if fail
 * --- by NPCdev
*/

int main(void)
{
	int alpha, ALPHA;

	for (alpha = 97; alpha < 123; alpha++)
	{
		putchar(alpha);
	}
	for (ALPHA = 65; ALPHA < 91; ALPHA++)
	{
		putchar(ALPHA);
	}

	putchar('\n');
	return (0);
}

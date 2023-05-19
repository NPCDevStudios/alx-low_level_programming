#include <stdio.h>

/**
 * main - Print reverse alphabet
 *
 * Return: 0 when done, 1 if fail
 * --- by NPCdev ---
*/

int main(void)
{
	int i;

	for (i = 122; i > 96; i--)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}

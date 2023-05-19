#include <stdio.h>

/**
 * main - Print all single digits
 *
 * Return: 0 when done, 1 if fail
 * --- by NPCdev ---
*/

int main(void)
{
	int digits;

	for (digits = 48; digits < 58; digits++)
	{
		putchar(digits);
	}
	putchar('\n');
	return (0);
}

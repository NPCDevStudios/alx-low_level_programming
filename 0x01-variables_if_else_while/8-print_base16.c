#include <stdio.h>

/**
 * main - Print all numbers of base 16 in lowercase
 *
 * Return: 0 when done, 1 if fail
 * --- by NPCdev ---
*/

int main(void)
{
	int dig, b16;

	for (dig = 48; dig < 58; dig++)
	{
	putchar(dig);
	}
	for (b16 = 97; b16 < 103; b16++)
	{
	putchar(b16);
	}
	putchar('\n');
	return (0);
}

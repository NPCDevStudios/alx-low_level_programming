#include <stdio.h>

/**
 * main - Print single digits seperated by a space and comma (,)
 *
 * Return: 0 when done, 1 if fail
 * --- by NPCdev ---
*/

int main(void)
{
	int dig;

	for (dig = 48; dig < 58; dig++)
	{
		putchar(dig);
		if (dig != 57)
		{
		putchar(',');
		putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

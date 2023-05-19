#include <stdio.h>

/**
 * main - Print double digits seperated by space and comma (,)
 *
 * Return: 0 when done, 1 if fail
 * --- by NPCdev ---
*/

int main(void)
{
	int dg1, dg2;

	for (dg1 = 48; dg1 < 58; dg1++)
	{
		for (dg2 = dg1 + 1; dg2 < 58; dg2++)
		{
			putchar(dg1);
			putchar(dg2);
			if (!(dg1 == 56 && dg2 == 57))
				{
			putchar(',');
			putchar(' ');
				}
		}
	}
	putchar('\n');
	return (0);
}

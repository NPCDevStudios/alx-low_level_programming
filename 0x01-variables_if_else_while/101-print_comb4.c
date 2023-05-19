#include <stdio.h>

/**
 * main - Print combinations of 3 digits seperated by space and comma
 *
 * Return: 0 when done, 1 if fail
 * --- by NPCdev ---
*/

int main(void)
{
	int dg1, dg2, dg3;

	for (dg1 = 48; dg1 < 58; dg1++)
	{
		for (dg2 = dg1 + 1; dg2 < 58; dg2++)
		{
			for (dg3 = dg2 + 1; dg3 < 58; dg3++)
			{
				putchar(dg1);
				putchar(dg2);
				putchar(dg3);
				if (!(dg1 == 55 && dg2 == 56 && dg3 == 57))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

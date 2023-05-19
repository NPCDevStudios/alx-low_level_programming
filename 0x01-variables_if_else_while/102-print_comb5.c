#include <stdio.h>

/**
 * main - Print two double digits seperated by space,
 * both seperated by space and comma
 *
 * Return: 0 when done, 1 if fail
 * --- by NPCdev ---
*/

int main(void)
{
	int ddg1, ddg2;

	for (ddg1 = 0; ddg1 <= 99; ddg1++)
	{
		for (ddg2 = ddg1 + 1; ddg2 <= 99; ddg2++)
		{
			putchar((ddg1 / 10) + '0');
			putchar((ddg1 % 10) + '0');
			putchar(' ');
			putchar((ddg2 / 10) + '0');
			putchar((ddg2 % 10) + '0');
				if (!(ddg1 == 98 && ddg2 == 99))
				{
				putchar(',');
				putchar(' ');
				}
		}
	}
	putchar('\n');
	return (0);
}

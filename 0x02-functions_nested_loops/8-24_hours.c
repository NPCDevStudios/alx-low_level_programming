#include "main.h"

/**
 * jack_bauer - Print 24 Hours
 * Return: void
 * --- by NPCdev ---
*/

void jack_bauer(void)
{
	int dg1, dg2;

	for (dg1 = 0; dg1 < 24; dg1++)
	{
		for (dg2 = 0; dg2 < 60; dg2++)
		{
			_putchar(dg1 / 10 + '0');
			_putchar(dg1 % 10 + '0');
			_putchar(':');
			_putchar(dg2 / 10 + '0');
			_putchar(dg2 % 10 + '0');
			_putchar('\n');
		}
	}
}

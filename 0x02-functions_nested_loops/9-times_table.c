#include "main.h"
#include <stdio.h>

/**
 * times_table - Print 9 times table starting from 0
 * Return: void
 * --- by NPCdev ---
*/
char asciMult (int a, int b)
{

}
void times_table(void)
{
	int i, j;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			_putchar(asciMult(i,j));
			if (j < 57)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
		}
	_putchar('\n');
	}
}

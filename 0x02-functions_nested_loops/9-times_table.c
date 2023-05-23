#include "main.h"
#include <stdio.h>

/**
 * times_table - Print 9 times table starting from 0
 * Return: void
 * --- by NPCdev ---
*/
void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			printf("%d",i*j);
			if (j < 9)
			{
				printf(", ");
			}
		}
	printf("\n");
	}
}

#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Print integers from starting value to 98
 * @n: Starting value
 * --- by NPCdev ---
*/

void print_to_98(int n)
{
	int i;

	
	if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d",i);
			if (i != 98)
				printf(", ");
		}
	}
	else
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i != 98)
				printf(", ");
		}
	}
	printf("\n");
}

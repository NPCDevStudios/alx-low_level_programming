#include <stdio.h>

/**
 * print_array - Print given array a's given number of integers n
 * @a: Pointer to array
 * @n: number of integers to print
 * Return: void
 * --- by NPCdev ---
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
			printf(", ");
	}
	printf("\n");
}

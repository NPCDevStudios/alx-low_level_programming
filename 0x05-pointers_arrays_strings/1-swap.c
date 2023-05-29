#include "main.h"

/**
 * swap_int - Swap given int pointers' values
 * @a: first given int pointer
 * @b: second given int pointer
 * Return: void
 * --- by NPCdev ---
*/

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}

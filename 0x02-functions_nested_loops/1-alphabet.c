#include "main.h"

/**
 * print_alphabet - Prints all lowercase alphabet
 * Return: void
 * --- by NPCdev ---
*/

void print_alphabet(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}

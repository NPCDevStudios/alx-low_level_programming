#include "main.h"

/**
 * print_rev - Print given string in reverse
 * @s: given string
 * Return: void
 * --- by NPCdev ---
*/

void print_rev(char *s)
{
	int len = 0, i;

	while (*s != '\0')
	{
		len += 1;
	s++;
	}

	for (i = len; i >= 0; i--)
	{
		_putchar(*s);
	s--;
	}
	_putchar('\n');
}

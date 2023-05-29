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

	while (s[len] != '\0')
	{
		len += 1;
	}

	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

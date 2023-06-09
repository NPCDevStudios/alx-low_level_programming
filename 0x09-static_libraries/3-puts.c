#include "main.h"

/**
 * _puts - Print given string
 * @s: given string
 * Return: void
 * --- by NPCdev ---
*/

void _puts(char *s)
{
	int len = 0, i;

	while (*s != '\0')
	{
		len++;
	s++;
	}

	s -= len;

	for (i = 0; i < len; i++)
	{
		_putchar(*s);
	s++;
	}
	_putchar('\n');
}
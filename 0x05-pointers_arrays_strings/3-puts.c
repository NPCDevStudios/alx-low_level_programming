#include "main.h"

/**
 * _puts - Print given string
 * @str: given string
 * Return: void
 * --- by NPCdev ---
*/

void _puts(char *str)
{
	int len = 0, i;

	while (*str != '\0')
	{
		len++;
	str++;
	}

	str -= len;

	for (i = 0; i < len; i++)
	{
		_putchar(*str);
	str++;
	}
	_putchar('\n');
}

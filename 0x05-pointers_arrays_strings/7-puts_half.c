#include "main.h"

/**
 * puts_half - Print half given string
 * @str: Given string
 * Return: void
 * --- by NPCdev ---
*/

void puts_half(char *str)
{
	int len = 0, i;

	while (str[len] != '\0')
		len++;
	if (len % 2 != 0)
	{
		for (i = (len / 2) + 1; i < len; i++)
			_putchar(str[i]);
	}
	else
	{
		for (i = len / 2; i < len; i++)
			_putchar(str[i]);
	}
	_putchar('\n');
}

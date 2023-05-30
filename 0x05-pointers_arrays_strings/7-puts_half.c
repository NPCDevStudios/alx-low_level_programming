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

	for (i = len / 2; i < len; i++)
		_putchar(str[i]);
	_putchar('\n');
}

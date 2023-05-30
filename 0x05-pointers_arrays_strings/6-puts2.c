#include "main.h"

/**
 * puts2 - Print every other character of given string
 * @str: given string
 * Return: void
 * --- by NPCdev ---
*/

void puts2(char *str)
{
	int len = 0, i;

	while (str[len] != '\0')
		len++;

	for (i = 0; i < len; i++)
	{
		if (i % 2 != 0)
			continue;
		else
			_putchar(str[i]);
	}
	_putchar('\n');
}

#include "main.h"

/**
 * main - Prints exactly (_putchar)
 * Return: 0 when done, 1 if fail
 * --- by NPCdev ---
*/

int main(void)
{
	char str[] = "_putchar";
	int i, strlen = (sizeof(str) / sizeof(str[0]));

	for (i = 0; i <= strlen; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');

	return (0);
}

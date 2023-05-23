#include "main.h"

/**
 * print_sign - Print @n's sign
 * @n: integer to be checked
 * Return: 1 if n > 0, 0 if n is 0, -1 if n < 0
 * --- by NPCdev ---
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	_putchar('0');
	return (0);
}

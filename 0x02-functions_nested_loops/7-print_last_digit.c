#include "main.h"
#include <limits.h>

/**
 * print_last_digit - Returns last digit of given integer
 * @n: Given integer
 * Return: Last digit of @n
 * --- by NPCdev ---
*/

int print_last_digit(int n)
{
	int lastDig = n % 10;

	if (n == INT_MIN)
	{
		_putchar('8');
		return (8);
	}

	if (n < 0)
		lastDig = ((n * -1) % 10);

	_putchar(lastDig + '0');
	return (lastDig);
}

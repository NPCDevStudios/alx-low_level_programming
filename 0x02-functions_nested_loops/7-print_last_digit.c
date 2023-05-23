#include "main.h"

/**
 * print_last_digit - Returns last digit of given integer
 * @n: Given integer
 * Return: Last digit of @n
 * --- by NPCdev ---
*/

int print_last_digit(int n)
{
	int lastDig = n % 10;

	if (n < 0)
		lastDig = ( (n * (-1)) % 10);

	_putchar(lastDig % 10 + '0');
	return (lastDig);
}

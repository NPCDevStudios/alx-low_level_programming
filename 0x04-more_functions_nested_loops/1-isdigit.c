#include "main.h"

/**
 * _isdigit - Check if given int is a digit
 * @c: given int
 * Return: 1 if @c is a digit, 0 if not
 * --- by NPCdev ---
*/

int _isdigit(int c)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		if (c == i)
			return (1);
	}
	return (0);
}

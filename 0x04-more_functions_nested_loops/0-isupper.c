#include "main.h"

/**
 * _isupper - Check if given character is Uppercase
 * @c: given character
 * Return: 1 if @c is uppercase, 0 if not
 * --- by NPCdev ---
*/

int _isupper(int c)
{
	int i;

	for (i = 65; i < 91; i++)
	{
		if (c == i)
			return (1);
	}
	return (0);
}

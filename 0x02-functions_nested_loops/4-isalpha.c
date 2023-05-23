#include "main.h"

/**
 * _isalpha - Chech if @c is a letter
 * @c: variable to be tested
 * Return: 1 if @c is a letter, 0 if not
 * --- by NPCdev ---
*/

int _isalpha(int c)
{
	int i, j;

	for (i = 97; i < 123; i++)
	{
		for (j = 65; j < 91; j++)
		{
			if (c == i || c == j)
				return (1);
		}
	}
	return (0);
}

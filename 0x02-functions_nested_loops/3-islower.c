#include "main.h"

/**
 * _islower - Returns value based on case of @c
 * @c: character to be tested
 * Return: 1 if c is lowercase, 0 if not
 * --- by NPCdev ---
*/

int _islower(int c)
{
	int i;

	for (i = 97; i < 123; i++)
	{
	if (c == i)
		return (1);
	}
	return (0);
}

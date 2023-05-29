#include "main.h"

/**
 * _strlen - Return given string's length
 * @s: Pointer to given string's first character
 * Return: length of given string
 * --- by NPCdev ---
*/

int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i += 1;
	s++;
	}
	return (i);
}

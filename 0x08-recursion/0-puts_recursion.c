#include "main.h"

/**
 * _puts_recursion - Print a new-line-followed String using recursion
 * @s: Pointer to the string
 * Return: void
 * --- by NPCdev ---
*/

void _puts_recursion(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;

	if (s[len] == '\0')
		return (0);

}

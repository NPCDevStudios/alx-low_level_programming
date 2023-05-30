#include "main.h"

/**
 * rev_string - Reverse given string
 * @s: given string
 * Return: void
 * --- by NPCdev ---
*/

void rev_string(char *s)
{
	int len = 0, i, j = 0;
	char temp;

	while (s[len] != '\0')
	{
		len += 1;
	}

	for (i = len - 1; i >= 0; i--)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		j++;
	if (j >= i)
		break;
	}
}

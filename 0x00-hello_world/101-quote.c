#include <stdio.h>
#include <string.h>

/**
 * main - Print a specific string
 *
 * Return: 1 when done, 0 if fail
 * --- by NPCdev ---
 */

int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	int i;

	for (i; i < strlen(str); i++)
	{
		putchar(str[i]);
	}
	return (1);
}

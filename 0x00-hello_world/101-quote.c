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
	long unsigned int i;

	for (i = 0; i < strlen(str); i++)
	{
		putchar(str[i]);
	}
	return (1);
}

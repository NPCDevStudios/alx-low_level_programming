#include "main.h"

/**
 * char *_strcat - Concatenate source string to destination string
 * @src: Source string
 * @dest: Destination string
 * Return: Pointer to Destination string
 * --- by NPCdev ---
*/

char *_strcat(char *dest, char *src)
{
	int dest_len = 0, i, n = sizeof(src);

	while (dest[dest_len] != '\0')
		dest_len++;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';

	return (dest);
}

#include "main.h"

/**
 * *_strcpy - Copy Source string into Destination string
 * @src: Source string
 * @dest: Destination string
 * Return: Pointer to first character of destination string
 * --- by NPCdev ---
*/

char *_strcpy(char *dest, char *src)
{
	int len = 0, i, n = sizeof(src);

	while (src[len] != '\0')
		len++;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (i = 0; i < n; i++)
		dest[i] = '\0';
	return (dest);
}

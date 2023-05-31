#include <stdio.h>

int main(void)
{
	char *name = "Lokmen";

	printf("Adress of name = %p\n",name);
	printf("Adress of first char = %p\n",&name[0]);
	printf("Value of last char = %c\n",name[7]);
	return (0);
}

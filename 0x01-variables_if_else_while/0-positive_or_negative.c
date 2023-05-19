#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Print whether random generated value is positive or negative
 *
 * Return: 0 when done, 1 if erro
 * --- by NPCdev ---
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

		if (n > 0)
		printf("%d is positive\n", n);
		else
		if (n < 0)
		printf("%d is negative\n", n);
		else
		printf("%d is zero\n", n);

	return (0);
}

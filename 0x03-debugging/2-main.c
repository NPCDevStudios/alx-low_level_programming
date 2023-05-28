#include <stdio.h>
#include "main.h"

/**
* main - prints the largest of 3 integers
* Return: 0
*/

void printLarg(int a, int b, int c)
{
        int largest;
        largest = largest_number(a, b, c);
        printf("%d is the largest number\n", largest);
}

int main(void)
{
	int a = 972,b = -98,c = 0,
	d = 3,e = 5,f = 2,
	g = -1,h = 0,i = -98,
	j = 98347,k = 98346,l = 98345,
	m = -4756,n = 3647,o = -1,
	p = 98,q = 98,r = 98,
	s = 1,t = 98,u = 98,
	v = 98, w = 1, x = 98,
	y = 98, z = 98, aa = 1;
	printLarg(a, b, c);
	printLarg(d, e, f);
	printLarg(g, h, i);
	printLarg(j, k, l);
	printLarg(m, n, o);
	printLarg(p, q, r);
	printLarg(s, t, u);
	printLarg(v, w, x);
	printLarg(y, z, aa);
        return (0);
}

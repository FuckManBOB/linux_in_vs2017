#include <stdio.h>


int calc_add(int x, int y)
{
	printf("calc_add: %d + %d\n",x, y);

	return x + y;
}

int calc_sub(int x, int y)
{
	printf("calc_add: %d - %d\n", x, y);

	return x - y;
}
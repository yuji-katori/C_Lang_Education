#include <stdio.h>

int abs(int x)
{
	return x >= 0 ? x : -x ;
}

void main(void)
{
int (*point)(int);
int a, b;

	printf("Input number : ");
	scanf("%d", &a );

	point = abs;
	b = point( a );

	printf("%d absolute value is %d.\n", a, b );
	__nop( );
}
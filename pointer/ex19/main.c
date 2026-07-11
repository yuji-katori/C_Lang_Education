#include <stdio.h>

int Add(int x, int y)
{
	return x + y;
}

int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}

int Div(int x, int y)
{
	return x / y;
}

int Mod(int x, int y)
{
	return x % y;
}

int (*a[])(int,int) = { Add, Sub, Mul, Div, Mod };

void main(void)
{
int x, y, i;

	printf("Input two number : ");
	scanf("%d%d", &x, &y );

	printf("Arithmetic operation value is");
	for( i=0 ; i<5 ; i++ )
		printf(" %d", a[i]( x, y ) );
	printf(".\n");
	__nop( );
}
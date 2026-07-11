#include <stdio.h>
#include <stddef.h>

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

int (*a[])(int,int) = { Add, Sub, Mul, Div, Mod, NULL };

void main(void)
{
int (**pa)(int,int);
int x, y;

	printf("Input two number : ");
	scanf("%d%d", &x, &y );

	printf("Arithmetic operation value is");
	for( pa=a  ; *pa!=NULL ; pa++   )
		printf(" %d", (*pa)( x, y ) );
	printf(".\n");
	__nop( );
}
#include <stdio.h>

int max_analize(int x, int y, int z)
{
int *work;

	printf("&x = %p, &y = %p, &z = %p\n", &x, &y, &z );
	work = &x;
	printf("work = %p, *work = %d\n", work, *work );

	if( *work < y )
		work = &y;
	printf("work = %p, *work = %d\n", work, *work );

	if( *work < z )
		work = &z;
	printf("work = %p, *work = %d\n", work, *work );

	return *work;
}

void main(void)
{
int a, b, c;

	printf("Input three numbers : ");
	scanf("%d%d%d", &a, &b, &c );

	printf("Max number is %d.\n", max_analize( a, b, c ) );
	__nop( );
}
#include <stdio.h>

int (*vw(int efg))[3]
{
static int abc[4][3] = { { 1, 2, 3 } };

	printf("efg = %d\n", efg );
	return abc;
}

int (*(*xyz[5])(int))[3] = { vw };

void main(void)
{
int (*lmn)[3] = xyz[0]( 7 );

	printf("abc[0][0] = %d\n", (*lmn)[0] );
	printf("abc[0][1] = %d\n", (*lmn)[1] );
	printf("abc[0][2] = %d\n", (*lmn)[2] );
	__nop( );
}
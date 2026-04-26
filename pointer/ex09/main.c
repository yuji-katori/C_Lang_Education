#include <stdio.h>

int vw(int xyz)
{
	printf("xyz = %d\n", xyz );
	return xyz + 2;
}

int (*abc(int def))(int)
{
	printf("def = %d\n", def );
	return vw;
}

void main(void)
{
	printf("Return code of VW = %d\n", abc( 5 )( 7 ) );
	__nop( );
}
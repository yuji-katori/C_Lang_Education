#include <stdio.h>

char a[10][10][10];

void main(void)
{
	if( sizeof(void *) != sizeof(int) )
		return ;

	printf("char a[10][10][10];\n\n");

	printf("address of a       is %d\n",   a );
	printf("address of a[0]    is %d\n",   a[0] );
	printf("address of a[0][0] is %d\n\n", a[0][0] );

	printf("address of a + 1       is %d\n",   a + 1 );
	printf("address of a[0] + 1    is %d\n",   a[0] + 1 );
	printf("address of a[0][0] + 1 is %d\n\n", a[0][0] + 1 );

	printf("address of a[9]    is %d\n",   a[9] );
	printf("address of a[9][0] is %d\n\n", a[9][0] );

	printf("number of a[9]    - a[0]    is %td\n", a[9]    - a[0] );
	printf("number of a[9][0] - a[0][0] is %td\n", a[9][0] - a[0][0] );
	__nop( );
}
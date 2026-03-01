#include <stdio.h>

int total_analize(int *pa, size_t n)
{
int total = 0;
int *pb;

	for( pb=pa ; pa<pb+n ; pa++ )
		total += *pa;

	return total;
}

void main(void)
{
static int a[] = { 11, 22, 33, 44, 55 };

	printf("Total value is %d.\n", total_analize( a, sizeof(a)/sizeof(int) ) );
	__nop( );
}

#include <stdio.h>

int a[] = { 11, 22, 33, 44, 55 };

void main(void)
{
int *pa, total = 0;

	for( pa=a ; pa<&a[5] ; pa++ )  {
		printf("&a[%td] = %p, pa = %p, total = %3d\n", pa-a, &a[pa-a], pa, total );
		total += *pa;
	}

	printf("&a[%td] = %p, pa = %p, total = %3d\n", pa-a, &a[pa-a], pa, total );
    __nop( );
}

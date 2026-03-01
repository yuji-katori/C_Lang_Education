#include <stdio.h>

int a[] = { 11, 22, 33, 44 };

void main(void)
{
int *pa = a;

	printf("  a[1]  = %d, *(pa+1) = %d\n",  a[1],  *(pa+1) );
	printf(" *(a+2) = %d,  pa[2]  = %d\n", *(a+2),  pa[2]  );
	printf("  3[a]  = %d,  3[pa]  = %d\n",  3[a],   3[pa]  );
	__nop( );
}
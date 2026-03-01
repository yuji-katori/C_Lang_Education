#include <stdio.h>

int total_analize(int *pa, size_t n)
{
int total = 0;
// 配列名の代わりに利用するポインタの宣言

	for(    ;    ;    ) 		// ポインタによる配列要素分のループ
		total += *pa;

	return total;
}

void main(void)
{
static int a[] = { 11, 22, 33, 44, 55 };

	printf("Total value is %d.\n", total_analize( a, sizeof(a)/sizeof(int) ) );
	__nop( );
}
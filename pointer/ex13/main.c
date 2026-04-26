#include <stdio.h>

int a[][4] = { { 1, 2, 3, 4 }, { 11, 22, 33, 44 }, { 111, 222, 333, 444 } };

void main(void)
{
int j, total = 0;
int (*pa)[4];

	for( pa=a ; pa<a+3 ; pa++ )				// 行数分のループ
		for( j=0 ; j<4 ; j++ )				// 列数分のループ
			total += (*pa)[j];

	printf("Total value is %d.\n", total );
	__nop( );
}
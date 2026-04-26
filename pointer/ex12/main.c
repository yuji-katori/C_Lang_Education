#include <stdio.h>

int a[][4] = { { 1, 2, 3, 4 }, { 11, 22, 33, 44 }, { 111, 222, 333, 444 } };

void main(void)
{
int i, j, total = 0;

	for( i=0 ; i<3 ; i++ )					// 行数分のループ
		for( j=0 ; j<4 ; j++ )				// 列数分のループ
			total += a[i][j];

	printf("Total value is %d.\n", total );
	__nop( );
}
#include <stdio.h>

int a[2][3][4] = {{{ 1, 2, 3, 4 }, { 11, 22, 33, 44 }, { 111, 222, 333, 444 }},
                  {{ 5, 6, 7, 8 }, { 55, 66, 77, 88 }, { 555, 666, 777, 888 }}};

void main(void)
{
int total = 0;
// 面、行、列を指す各ポインタの宣言

	for( pa=a ; pa<a+2 ; pa++ )					// 面数分のループ
		for(      ;      ; pb++ )				// 行数分のループ
			for(      ;      ; pc++ )			// 列数分のループ
				total += *pc;

	printf("Total value is %d.\n", total );
}
#include <stdio.h>

int max_analize(int x, int y, int z)
{
int work;					// 最大の値を格納する変数

	work = x;				// xが最大と仮定し、workに代入

	if( work < y )			// yの方が大きいか？
		work = y;			// そうであれば、yの値をworkに代入

	if( work < z )			// zの方が大きいか？
		work = z;			// そうであれば、zの値をworkに代入

	return work;			// 最大値を格納しているworkを返却
}

void main(void)
{
int a, b, c;

	printf("Input three numbers : ");
	scanf("%d%d%d", &a, &b, &c );

	printf("Max number is %d.\n", max_analize( a, b, c ) );
	__nop( );
}
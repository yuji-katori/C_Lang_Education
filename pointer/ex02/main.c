#include <stdio.h>

int max_analize(int x, int y, int z)
{
int *work;					// 最大値を持つ変数を指すポインタ

	work = &x;				// xが最大と仮定し、xのアドレスを代入

	if( *work < y )			// xよりyの方が大きいか？
		work = &y;			// そうであれば、yのアドレスを代入

	if( *work < z )			// xやyよりzの方が大きいか？
		work = &z;			// そうであれば、zのアドレスを代入

	return *work;			// workが指している変数の値を返却
}

void main(void)
{
int a, b, c;

	printf("Input three numbers : ");
	scanf("%d%d%d", &a, &b, &c );

	printf("Max number is %d.\n", max_analize( a, b, c ) );
	__nop( );
}
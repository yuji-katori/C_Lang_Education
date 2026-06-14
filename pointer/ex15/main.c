#include <stdio.h>

char *a[] = { "Renesas Electronics", "SuperH RISC engine", "RX Family" };

void main(void)
{
int i, len;

	for( i=0 ; i<3 ; i++ )  {							// 配列aの要素数分のループ
		for( len=0 ; *a[i]!='\0' ; len++ )				// 文字列長のループ
			a[i]++;										// ポインタの移動
		a[i] -= len;
		printf("Length of \"%s\" is %d.\n", a[i], len );
	}
	__nop( );
}
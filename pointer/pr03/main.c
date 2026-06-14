#include <stdio.h>

char *a[] = { "The quick brown fox ", "jumps over ", "the lazy dog." };
char b[100];

void main(void)
{
char **pa, *pb=b;

	for( pa=a ; pa<a+3 ; pa++ )
		while( **pa!='\0' )  {
								// 可能なら１行で記述してください
		}						// 無理なら３行で記述しましょう
	*pb = '\0';					//	① １文字コピーする
	printf("%s\n", b );			//	② ポインタ配列 a のポインタを pa を使ってインクリメントする
	__nop( );					//	③ ポインタ pb をインクリメントする
}
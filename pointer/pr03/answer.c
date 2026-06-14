#include <stdio.h>

char *a[] = { "The quick brown fox ", "jumps over ", "the lazy dog." };
char b[100];

void main(void)
{
char **pa, *pb=b;

	for( pa=a ; pa<a+3 ; pa++ )
		while( **pa!='\0' )  {
			*pb = **pa;
			(*pa) ++ ;
			pb ++ ;
//			*pb++ = *(*pa)++;
		}
	*pb = '\0';
	printf("%s\n", b );
	__nop( );
}
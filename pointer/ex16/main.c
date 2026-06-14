#include <stdio.h>

char *a[] = { "Renesas Electronics", "SuperH RISC engine", "RX Family" };

void main(void)
{
int len;
char **pa;

	for( pa=a ; pa<a+3 ; pa++ )  {
		for( len=0 ; **pa!='\0' ; len++ )
			(*pa)++;
		*pa -= len;
		printf("Length of \"%s\" is %d.\n", *pa, len );
	}
	__nop( );
}

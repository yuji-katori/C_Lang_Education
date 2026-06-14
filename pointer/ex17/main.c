#include <stdio.h>
#include <stddef.h>

char *a[] = { "Renesas Electronics", "SuperH RISC engine", "RX Family", NULL };

void main(void)
{
int len;
char **pa;

	for( pa=a ; *pa!=NULL ; pa++ )  {
		for( len=0 ; **pa!='\0' ; len++ )
			(*pa)++;
		*pa -= len;
		printf("Length of \"%s\" is %d.\n", *pa, len );
	}
	__nop( );
}
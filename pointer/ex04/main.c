#include <stdio.h>

int a[] = { 11, 22, 33, 44, 55 };			// ‰Šú’l‚ª‚TŒÂ‚È‚Ì‚Åint a[5] = ...‚Æ“¯‚¶

void main(void)
{
int i, total = 0;

	for( i=0 ; i<5 ; i++ )
		total += a[i];

	printf("Total value is %d.\n", total );
	__nop( );
}
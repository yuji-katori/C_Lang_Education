#include <stdio.h>

int a[] = { 11, 22, 33, 44, 55 };			// ‰Šú’l‚ª‚TŒÂ‚È‚Ì‚Åint a[5] = ...‚Æ“¯‚¶

void main(void)
{
int *pa, total = 0;

	for( pa=a ; pa<&a[5] ; pa++ )			// pa<a+5‚Å‚àOK
		total += *pa;

	printf("Total value is %d.\n", total );
	__nop( );
}
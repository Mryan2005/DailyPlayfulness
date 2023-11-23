#include <stdio.h>

void dectobin( int n );

int main()
{
	int n;
	
	scanf("%d", &n);
	dectobin(n);
	
	return 0;
}

void dectobin( int n ) {
	int a;
	n = n / 2;
	a = n % 2;
	printf("%d",a);
	if( n != 0) dectobin(n);
}

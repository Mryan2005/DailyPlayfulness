#include <stdio.h>
int fn( int a, int n ) {
	int y = 0;
	for(int i = 1; i <= n; i++) {
		y += a;
		if(i < n) {
			y *= 10;
		}
	}
	return y;
}
int SumA( int a, int n ) {
	int y = 0,sum = 0;
	for(int i = 1; i <= n; i++) {
		y += a;
		sum += y;
		if(i < n) {
			y *= 10;
		}
	}
	return sum;
}
int main()
{
	int a, n;
	
	scanf("%d %d", &a, &n);
	printf("fn(%d, %d) = %d\n", a, n, fn(a,n));        
	printf("s = %d\n", SumA(a,n));    
	
	return 0;
}

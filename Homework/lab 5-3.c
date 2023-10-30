#include <stdio.h>
int fib( int n ) {
	int x1 = 1, x2 = 1, x = 2;
	if (n == 1 || n == 2) {
		x = 1;
	} else {
		for(int i = 3; i <= n; i++){
			x1 = x2;
			x2 = x;
			x = x1 + x2;
		}
	}
	return x2;
}
int main()
{
	int n;
	
	scanf("%d", &n);
	printf("%d\n", fib(n));
	
	return 0;
}

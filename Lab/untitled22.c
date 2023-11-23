#include <stdio.h>

int fib( int n );
void PrintFN( int m, int n );

int main()
{
	int m, n, t;
	
	scanf("%d %d %d", &m, &n, &t);
	printf("fib(%d) = %d\n", t, fib(t));
	PrintFN(m, n);
	
	return 0;
}

/* 你的代码将被嵌在这里 */
int fib( int n ) {
	int x1 = 1, x2 = 1;
	int t = 0;
	for(int i = 1; i < n; i++) {
		t = x2;
		x2 = x1 + t;
		x1 = t;
	}
	return x1;
}
void PrintFN( int m, int n ) {
	int x1 = 1, x2 = 1,a,b;
	int have = 0;
	int count = 0;
	while(1) {
		a = x2;
		x2 = x1 + a;
		x1 = a;
		if(a > m && a < n) {
			have++;
		} else if ( a > n) {
			break;
		}
	}
	while(1) {
		b = x2;
		x2 = x1 + b;
		x1 = b;
		if(b > m && b < n) {
			count++;
			printf("%d",b);
			if(count < have) {
				printf(" ");
			}
		} else if ( b > n) {
			if(have == 0) {
				printf("No Fibonacci number");
			}
			break;
		}
	}
}

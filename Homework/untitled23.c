#include <stdio.h>

int factorsum( int number );
void PrintPN( int m, int n );

int main()
{
	int m, n;
	
	scanf("%d %d", &m, &n);
	if ( factorsum(m) == m ) printf("%d is a perfect number\n", m);
	if ( factorsum(n) == n ) printf("%d is a perfect number\n", n);
	PrintPN(m, n);
	
	return 0;
}

/* 你的代码将被嵌在这里 */
int factorsum( int number ) {
	int sum = 0;
	for (int i = 1; i < number; i++) {
		if(number % i == 0) {
			sum += i;
		}
	}
	return sum;
}
void PrintPN( int m, int n ) {
	int sum = 0;
	_Bool have = 0;
	for(int j = m; j < n; j++) {
		printf("%d = ",j);
		for (int i = 1; i <= j; i++) {
			if(j % i == 0) {
				printf("%d", i);
				printf(" + ");
				sum += i;
				have = 1;
			}
		}
		printf("\n");
		sum = 0;
	}
	if(!have) {
		printf("No perfect number");
	}
}

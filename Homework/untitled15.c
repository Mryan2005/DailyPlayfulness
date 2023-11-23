#include <stdio.h>
// n! = n*(n-1)*.....
long int f(long int x) {
	int y = 1;
	for(long int i = 1; i <= x; i++) {
		y *= i;
	}
	return y;
}
int main() {
	double eps,sum = 1;
	double a = 1,b = 1;
	scanf("%le", &eps);
	for(int i = 1; a > eps; i++){
		b *= 2.0*i+1.0;
		a = f(i)/b;
		sum += a;
	}
	printf("PI = %0.5lf",sum*2);
}

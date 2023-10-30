#include <stdio.h>
int main() {
	int N,a = 2,b = 1;
	double sum = 2.0/1.0;
	scanf("%d",&N);
	for (int i = 2; i <= N; i++) {
		a = a + b;
		b = a - b;
		sum += 1.0*a/b;
	}
	printf("%.2lf",sum);
}

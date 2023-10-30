#include <stdio.h>
int f(int x, int y) {
	int z = 0;
	while(y != 0){
		z = x % y;
		x = y;
		y = z;
	}
	return x;
}
int g(int M, int N) {
	int y = N;
	while(1) {
		if(y % M == 0 && y % N == 0) {
			break;
		}
		y++;
	}
	return y;
}
int main() {
	int M,N,m,n;
	scanf("%d %d", &M, &N);
	m = f(M,N);
	n = g(M,N);
	printf("%d %d",m,n);
}

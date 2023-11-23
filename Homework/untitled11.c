#include <stdio.h>
#include <math.h>
int isprime(long int x) {
	int y = 1;
	for (int i = 2; i <= sqrt(x); i++) {
		if(x % i == 0){
			y = 0;
			break;
		}
	}
	return y;
}
int main() {
	int N,q,p;
	scanf("%d",&N);
	for(p = 2; p <= N/2; p++) {
		q = N - p;
		if(isprime(q) && isprime(p)){
			printf("%d = %d + %d",N,p,q);
			break;
		}
	}
}

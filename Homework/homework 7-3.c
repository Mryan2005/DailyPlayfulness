#include <stdio.h>
int main() {
	int N,digit = 0,sum = 0;
	scanf("%d",&N);
	do{
		sum += N % 10;
		N /= 10;
		digit++;
		
	}while(N >0);
	printf("%d %d", digit,sum);
}

#include <stdio.h>
int main () {
	int isPrime;
	for(int j =1; j <= 100; j++) {
		for (int i = 2; i <= j/2; i++) {
			if(j % i == 0) {
				isPrime = 0;
				break;
			}
		}
		if(isPrime == 0){
			printf("%d不是素数\n",j);
		} else {
			printf("%d是素数\n",j);
		}
	}
	return 0;
}

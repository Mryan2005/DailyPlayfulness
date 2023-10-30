#include <stdio.h>
int main() {
	int m = 0;
	while(1) {
		if(m % 5 == 1 && m % 6 == 5 && m % 7 == 4 && m % 11 == 10){
			break;
		}
		m++;	
	}
	printf("%d",m);
}

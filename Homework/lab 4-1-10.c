#include <stdio.h>
#include <math.h>
int main() {
	int time = 0;
	int rabit = 2;
	int n = 1;
	int N;
	scanf("%d",&N);
	while (1) {
		time++;
		if(time % 3 == 0) {
			rabit += pow(2,n);
		}
		
		n++;
		if(rabit > N) {
			break;
		}
	}
	printf("%d",time);
}

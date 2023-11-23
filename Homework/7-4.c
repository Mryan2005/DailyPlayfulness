#include <stdio.h>
int max(int x[3]) {
	int temp;
	for (int i = 0; i < 3; i++) {
		if(x[i] <= x[i+1]) {
			temp = x[i];
			x[i+1] = temp;
			x[i] = x[i+1];
		}
	}
	for (int i = 3; i > 0; i--) {
		if(x[i] <= x[i-1]) {
			temp = x[i];
			x[i-1] = temp;
			x[i] = x[i-1];
		}
	}
	for(int i = 0; i < 3; i++)
		printf("%d",x[i]);
}
int main() {
	int x[3] = {2,0,7};
	max(x);
}

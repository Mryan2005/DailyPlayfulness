#include <stdio.h>
int max(int a) {
    int x[3] = {0};
    for(int i = 0; i < 3; i++) {
        x[i] = a % 10;
        a /= 10;
    }
	int temp;
	for (int i = 0; i < 2; i++) {
		if(x[i] <= x[i+1]) {
			temp = x[i];
			x[i] = x[i+1];
            x[i+1] = temp;
		}
	}
	for (int i = 2; i > 0; i--) {
		if(x[i-1] <= x[i]) {
			temp = x[i];
            x[i] = x[i-1];
			x[i-1] = temp;
		}
	}
	int c = x[0]*100 + x[1]*10 + x[2];
	return c;
}
int min(int a) {
	int x[3] = {0};
    for(int i = 0; i < 3; i++) {
        x[i] = a % 10;
        a /= 10;
    }
	int temp;
	for (int i = 0; i < 2; i++) {
		if(x[i+1] <= x[i]) {
			temp = x[i];
			x[i] = x[i+1];
            x[i+1] = temp;
		}
	}
	for (int i = 2; i > 0; i--) {
		if(x[i] <= x[i-1]) {
			temp = x[i];
            x[i] = x[i-1];
			x[i-1] = temp;
		}
	}
	int c = x[0]*100 + x[1]*10 + x[2];
	return c;
}
int main() {
	int input,id = 1;
	scanf("%d", &input);
	do {
		printf("%d: %d - %d = %d\n", id, max(input), min(input), max(input) - min(input));
		input = max(input) - min(input);
		id++;
	} while (input != 495);
    return 0;
}
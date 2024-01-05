#include <stdio.h>
int main() {
	int a[20] = {0}, b[20] = {0}, c[20] = {0};
	char ch;
	int N1, N2;
	int canInput = 0;
	scanf("%d%c",&N1, &ch);
	for(int i = 0; i < N1; i++) {
		scanf("%d%c",&a[i], &ch);
	}
	scanf("%d%c",&N2, &ch);
	for(int i = 0; i < N2; i++) {
		scanf("%d%c",&b[i], &ch);
	}
	// let's go
	int NotSame = 1;
	int NotSame1 = 1;
	int i3 = 0;
	for(int i1 = 0; i1 < N1; i1++) {
		for(int i2 = 0; i2 < N2; i2++) {
			if(a[i1] == b[i2]) {
				NotSame1 = 0;
				break;
			}
		}
		if(NotSame1 == 1) {
			for(int i = 0; i < i3+1; i++) {
				if(c[i] != a[i1]) {
					c[i3] = a[i1];
					i3++;
					break;
				} else {
					break;
				}
			}
		}
		NotSame = 1;
	}
	for(int i2 = 0; i2 < N2; i2++) {
		for(int i1 = 0; i1 < N1; i1++) {
			if(a[i1] == b[i2]) {
				NotSame = 0;
				break;
			}
		}
		if(NotSame == 1) {
			for(int i = 0; i < i3+1; i++) {
				if(c[i] != 
					) {
					canInput = 1;
				} else {
					canInput = 0;
					break;
				}
			}
			if(canInput == 1) {
				c[i3] = b[i2];
				i3++;
				break;
			}
		}
		NotSame = 1;
	}
	for(int i = 0; i < i3; i++) {
		printf("%d ", c[i]);
	}
}

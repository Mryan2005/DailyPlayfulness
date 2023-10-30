#include <stdio.h>
int order(const int n, int a[]) {
	int temp;
	for (int i = 0; i < n - 1; i++) {
		if ( a[i] > a[i + 1] ) {
			temp = a[i];
			a[i] = a[i + 1];
			a[i + 1] = temp;
		}
	}
	for (int i = n-1; i > 0; i--) {
		if ( a[i] < a[i-1]  ) {
			temp = a[i-1];
			a[i-1] = a[i];
			a[i] = temp;
		}
	}
}

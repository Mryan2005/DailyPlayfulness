#include <stdio.h>
int main() {
	const int N;
	scanf("%d", &N);
	int a[N+1];
	for(int i = 0; i < N; i++) {
		scanf("%d",&a[i]);
	}
	int x;
	scanf("%d", &x);
	for(int i = 0; i < N; i++) {
		if(x > a[i] && x < a[i+1]) {
			for(int j = N; j > i; j--) {
				a[j] = a[j-1];
			}
			a[i+1] = x;
		} 
	}
	for(int i = 0; i < N+1; i++) {
		printf("%d ",a[i]);
	}
}

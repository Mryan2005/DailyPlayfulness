#include <stdio.h>
int fir() {
	int n;
	scanf("%d",&n);
	int x = 0;
	int x1 = 1,x2 = 1;
	if(n < 3 ) {
		x = 1;
	} else {
		for(int i=1;i<n-1;i++){
			x = x1 + x2;
			x1 = x2;
			x2 = x;
		}
	}
	return x;
}

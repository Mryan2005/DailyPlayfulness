#include <stdio.h>
int sign(int n) {
	if (n < 0) {
		return(-1);
	} else if(n == 0){
		return(0);
	} else {
		return(1);
	}
}
int main() {
	int n;
	scanf("%d",&n);
	printf("sign(%d) = %d",n,sign(n));
	return 0;
}

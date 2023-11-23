#include <stdio.h>
int checkIt (int x) {
	
}
int main() {
	int a[1024] = {0};
	int sum = 0,j = 0,m,n,canPrint = 0,isNone = 0;
	scanf("%d %d",&m,&n);
	for(int k=m;k<=n;k++){
		for(int i = 1; i < k; i++) {
			if(k % i == 0){
				a[j] = i;
				sum += i;
				j++;
			}
			if(sum == k){
				canPrint = 1;
			}
		}
		sum = 0;
		if(canPrint == 1) {
			printf("%d = ",k);
			for(int i = 0; i < j; i++) {
				printf("%d",a[i]);
				if(i != j-1) {
					printf(" + ");
				}
			}
			printf("\n");
			isNone = 1;
		}
		j = 0;
		canPrint = 0;
	}
	if(isNone != 1) {
		printf("None");
	}
}

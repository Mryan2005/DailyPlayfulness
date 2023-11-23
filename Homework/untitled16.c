#include <stdio.h>
int search(int key, int list[], int len) {
	int value = -1;
	for(int i=0;i<len;i++){
		if(list[i] == key){
			value = i;
			break;
		}
	}
	return value;
}
int main() {
	int a[] = {1,2,5,6,4,1,25,6,12,44,123,26,24};
	int r = search(12, a, sizeof(a)/sizeof(a[0]));
	printf("%d",r);
}

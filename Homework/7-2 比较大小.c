#include <stdio.h>
int main() {
	int a,b,c,max,min,middle;
	scanf("%d %d %d",&a,&b,&c);
	if (a >= b) {
		max = a; 
		min = b;
		if(b >= c) {
			middle = b;
			min = c;
		} else {
			if(a >= c){
				middle = c;
				min = b;
			} else {
				middle = a;
				max = c;
			}
		}
	} else {	//b>a
		max = b; 
		min = a;
		if(a >= c) {
			middle = a;
			min = c;
		} else {	//a<c
			if(b >= c){
				middle = c;
				min = a;
			} else {	//b<c
				middle = b;
				max = c;
			}
			
		}
	}
	printf("%d->%d->%d",min,middle,max);
	return 0;
}

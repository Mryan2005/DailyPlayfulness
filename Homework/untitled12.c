#include<stdio.h>
#include <math.h>
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=2;i<=n/2;i++){
		if(isPrime(i)&&isPrime(n-i)){
			printf("%d = %d + %d\n",n,i,n-i);
			break;
		}
	}
	return 0;
} 
int isPrime(int x){
	int isPrime=1;
	if(x==1||x%2==0&&x!=2) isPrime=0;
	else {
		for(int i=3;i<=sqrt(x);i+=2){
			if(x%i==0){
				isPrime=0;
				break;
			}
		}
	}
	return isPrime;
}//这个函数非常非常重要，这是一个找质数（素数）的函数


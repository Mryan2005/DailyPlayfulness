#include<stdio.h>
#include<string.h>
int main()
{
	int n,i,b;
	scanf("%d",&n);
	int str1[10],str2[10];
	b=n-1;
	for(i=0;i<n;i++)
	{
		scanf("%d",&str1[i]);
		str2[b]=str1[i];
		b--;
	}
	for(i=0;i<n;i++)
	{
		printf("%d",str2[i]);
        if(i != n - 1) {
            printf(" ");
        }
	}
	
	return 0;
}
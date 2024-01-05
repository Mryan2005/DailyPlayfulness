#include<stdio.h>
int main()
{
    int i,flag=1;
    char a;
    int b;
    scanf("%d",&b);
    i=b;
    while(flag==1)
    {
        scanf("%c",&a);
        if(a=='=')
        {
            flag=1;
            break;
        }
        else{
            scanf("%d",&b);
            if(a=='+')
            {
                i=b+i;
            }
            else if(a=='-')
            {
                i=i-b;
            }
            else if(a=='*')
            {
                i=b*i;
            }
            else if(a=='/')
            {
                if(b==0)
                {
                    flag=-1;
                }
                else
                    i=i/b;
            }
            else{flag=-1;}
        }
    }
    if(flag==1)
    {
        printf("%d",i);
    }
    else
        printf("ERROR");
    return 0;
}
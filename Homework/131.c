#include<stdio.h>
int main()
{
    int i,flag=1;
    char a;
    scanf("%d",&i);
    int b;
    b=i;
    while(flag==1)
    {
        scanf("%c",&a);
        if(a=='=')
        {
            flag=1;
            break;
        }
        else{
            scanf("%d",&i);
            if(a=='+')
            {
                b=b+i;
            }
            else if(a=='-')
            {
                b=b-i;
            }
            else if(a=='*')
            {
                b=b*i;
            }
            else if(a=='/')
            {
                if(b==0)
                {
                    flag=-1;
                }
                else
                    b=b/i;
            }
            else{flag=-1;}
        }
    }
    if(flag==1)
    {
        printf("%d",b);
    }
    else
        printf("ERROR");
    return 0;
}
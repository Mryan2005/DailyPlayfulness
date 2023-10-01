#include <stdio.h>
int main(){
    int n, i = 1;
    printf("请输入一个数：");
    scanf("%d", &n);
    while ( n > 1 ){
        if ( n / i == 1 ){
            if ( i == n ){
                printf("%d是素数\n", n);
                break;
            } else if ( i == 1 ){
                printf("%d可被1整除\n", n);
            } else {
                printf("%d不是素数\n", n);
                break;
            }    
        }
        i++;
    }
}
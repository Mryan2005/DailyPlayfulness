#include <stdio.h>
#define MAXN 20

void CountOff( int n, int m, int out[] );

int main()
{
    int out[MAXN], n, m;
    int i;
    
    scanf("%d %d", &n, &m);
    CountOff( n, m, out );   
    for ( i = 0; i < n; i++ )
        printf("%d ", out[i]);
    printf("\n");
    
    return 0;
}

/* 你的代码将被嵌在这里 */

void CountOff( int n, int m, int out[] ) {
    int num = 0;
    int flag = 0;
    for(int i = 0; i < n; i++) {
        out[i] = 0;
    }
    int i = 0;
    while(flag != n) {
        if(out[i++] == 0) {
            num++;
        }
        if(num == m) {
            flag++;
            out[i - 1] = flag;
            num = 0;
        }
        i %= n;
    }
}
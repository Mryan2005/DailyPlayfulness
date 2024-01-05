#include <stdio.h>
#define MAXN 10

void f( long int x, char *p );

int main()
{
    long int x;
    char s[MAXN] = "";
    
    scanf("%ld", &x);
    f(x, s);
    printf("%s\n", s);
    return 0;
}

/* 你的代码将被嵌在这里 */

void f( long int x, char *p ) {
    int isP, y, flag = 0;
    int count = 0;
    for(int i = 0; i < MAXN; i++) {
        *(p + i) = 0;
    }
    if(x > 0 ) {
        isP = 1;
        flag = 1;
    } else if(x < 0){
        x *= -1;
        flag = 1;
    } else {
        isP = 1;
    }
    if(x == 0) {
        *p = '0';
    }
    while(x > 0 && flag == 1) {
        y = x % 16;
        x /= 16;
        switch(y) {
            case 10:
                *(p + MAXN -1 - count) = 'A';
                break;
            case 11:
                *(p + MAXN -1 - count) = 'B';
                break;
            case 12:
                *(p + MAXN -1 - count) = 'C';
                break;
            case 13:
                *(p + MAXN -1 - count) = 'D';
                break;
            case 14:
                *(p + MAXN -1 - count) = 'E';
                break;
            case 15:
                *(p + MAXN -1 - count) = 'F';
                break;
            default:
                 *(p + MAXN -1 - count) = '0' + y - 0;
                break;
        };
        count++;
    }
    char *q, *t;
    q = p;
    t = p;
    for(int i = 0; i < MAXN && flag == 1; i++) {
        if(*q == 0) {
            q++;
        } else if(i < MAXN){
            *t = *q;
            *q = 0;
            t++;
            q++;
        }
    }
    for(int i = MAXN - 1; i >= 0 && !isP && flag == 1; i--) {
        *(p + i) = *(p + i - 1);
    }
    if(!isP && flag == 1) {
        *p = '-';
    }
}
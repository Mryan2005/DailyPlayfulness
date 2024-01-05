#include <stdio.h>
#define MAXN 20

void strmcpy( char *t, int m, char *s );

int main()
{
    char t[MAXN], s[MAXN];
    int m;
    char ch;
    int i = 0;
    scanf("%d\n", &m);
    char a[60] = {'\0'};
    while((ch = getchar()) != '\n')
        t[i++] = ch;
    strmcpy( t, m, s );
    printf("%s\n", s);

    return 0;
}

/* 你的代码将被嵌在这里 */
void strmcpy( char *t, int m, char *s ) {
    #include <string.h> 
    int startPoint;
    for(int i = 0; i < MAXN; i++) {
        *(s+i) = '\0';
    }
    for(int i = 0; i < MAXN; i++) {
        if( *(s+i) == 0 ) {
            startPoint = i;
            break;
        }
    }
    for(int i = 0; i < MAXN; i++) {
        *(s+startPoint+i) = *(t+i+m-1);
        if(*(s+startPoint+i) == 0) {
            break;
        }
    }
    if(m > MAXN) {
        *s = "";
    }
}
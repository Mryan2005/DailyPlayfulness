#include <stdio.h>
#define MAXN 20

void delchar( char *str, char c );

int main()
{
    char str[MAXN], c;

    scanf("%c", &c);
    delchar("happy new year", c);
    printf("%s\n", str);
    
    return 0;
}

/* 你的代码将被嵌在这里 */
void delchar( char *str, char c ) {
    int flag = 0;
    int index = 0;
    for(int i = 0; *str != '\0'; str++, i++) {
        if(*str == c) {
            index = i;
            flag = 1;
        }
        if(flag == 1) {
            str = &str[0];
            for(int j = index; j < MAXN; j++) {
                *(str+index) = *(str+index+1);
            }
            flag = 0;
        }
    }
}
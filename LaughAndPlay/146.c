#include <stdio.h>
int main() {
	static char *p, str[1024];
    int count = 0;
    gets(str);
    p = str;
    for(int i = 1; i <= 1024; i++) {
        count++;
    }
    for(int i = 1; i <= count; i++, p++) {
        if(*p == ' '){
            if(*(p+1) != ' ' && *(p+1) >= 'a' && *(p+1) <= 'z') {
                *(p+1) += 'A' - 'a';
            }
        }
    }
    puts(str);
}
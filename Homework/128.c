#include <stdio.h>
#include <string.h>
int main() {
    static char str[80], strMin[80];
    long int count, j, sum = 0;
    scanf("%ld", &count);
    gets(str);
    for(long int i = 1; i <= count; i++) {
        sum = 0;
        gets(str);
        if(i == 1) {
            strcpy(strMin, str);
        } else {
            for(int j = 0; j < 80; j++) {
                if(str[j] > strMin[j]) {
                    break;
                }
                strcpy(strMin, str);
            }
        }
    }
    printf("Min is: %s", strMin); 
}
#include <stdio.h>
#include <string.h>
int main() {
    static char str[80], strMin[80];
    int count, j, sum = 0, sumMin;
    scanf("%d", &count);
    gets(str);
    for(int i = 1; i <= count; i++) {
        sum = 0;
        gets(str);
        if(i == 1) {
            strcpy(strMin, str);
        } else {
            for(int i = 0; i < 80; i++) {
                if(str[i] > strMin[i] || str[i] == 0 || strMin[i] == 0) {
                    break;
                }
                strcpy(strMin, str);
            }
        }
    }
    printf("Min is: %s", strMin); 
}
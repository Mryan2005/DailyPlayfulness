#include <stdio.h>
typedef struct {
    int a;
    int b;
} num;
int main() {
    num num1, num2;
    int res = 0;
    scanf("%d/%d %d/%d", &num1.a, &num1.b, &num2.a, &num2.b);
    if(num1.a < num2.a) {
        if(num1.a != 1 && num2.a != 1) {
            if(num2.a % num1.a == 0) {
                res += 1;
            }
            if(num2.b % num1.b == 0) {
                res += 1;
            }
        } else if(num1.a == 1){
            if(num2.b / num1.b == num2.a / num1.a) {
                res = 2;
            }
        } else if(num2.a == 1){
            if(num2.b / num1.b == num2.a / num1.a) {
                res = 2;
            }
        }
    } else if(num1.a > num2.a) {
        if(num1.a != 1 && num2.a != 1) {
            if(num1.a % num2.a == 0) {
                res += 1;
            }
            if(num1.b % num2.b == 0) {
                res += 1;
            }
        } else if(num1.a == 1){
            if(num1.b / num2.b == num1.a / num2.a) {
                res = 2;
            }
        } else if(num2.a == 1){
            if(num1.b / num2.b == num1.a / num2.a) {
                res = 2;
            }
        }
    }
    if(res == 2) {
        printf("%d/%d = %d/%d", num1.a, num1.b, num2.a, num2.b);
    } else {
        if(num2.b < num1.b) {
            printf("%d/%d > %d/%d", num1.a, num1.b, num2.a, num2.b);
        } else {
            printf("%d/%d < %d/%d", num1.a, num1.b, num2.a, num2.b);
        }
    }
}
#include <stdio.h>
 int a = 1;
 int y = 0;
 int q = 1;
 int c = 1;
 int f(int x) {
     y = 1;
 }

 int main() {
     for(int i = 1; i <= 10; i++) {
         a++;
     }
     if(a == 10) {
         c = 2;
     }
     f(a);
     printf("a = %d, c = %d, q = %d, y = %d",a,c,q,y);
     return 0;
 }
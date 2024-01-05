#include <stdio.h>
#include <stdlib.h>
int main() {
    int *p;
    int cnt = 0;
    while(p = (int *)malloc(100*1024*1024)) {
        cnt++;
    }
    printf("分配了%d00MB的空间\n",cnt);
}
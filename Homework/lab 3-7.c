#include <stdio.h>
int main() {
    int N, score, A = 0, B = 0, C = 0, D = 0, E = 0;
    scanf("%d",&N);
    for(int i = 1; i <= N; i++) {
        scanf("%d",score);
        score /= 10;
        switch(score) {
            case 10:
            case 9:
                A++;
                break;
            case 8:
                B++;
                break;
            case 7:
                C++;
                break;
            case 6:
                D++;
                break;
            default:
                E++;
                break;
        }
    }
    printf("%d %d %d %d %d", A ,B, C ,D ,E);
}
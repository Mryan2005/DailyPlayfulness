#include <stdio.h>
int main() {
	int N, K;
	int x1, x2, y1, y2;
	int flag = 0;
    int flag1 = 0;
	int win = 0;
    int count = 0;
	int fail = 0;
	scanf("%d", &N);
	char ch = getchar();
	char a[10][10] = {0};
    int used[1024] = {0};
	for(int y = 0; y < 2 * N; y++) {
		for(int x = 0; x < 2 * N; x++) {
			scanf("%c%c", &a[y][x], &ch);
		}
	}
	scanf("%d", &K);
	for(int i = 1; i <= K; i++) {
		scanf("%d %d %d %d", &y1, &x1, &y2, &x2);
		y1--;
		x1--;
		x2--;
		y2--;
		if(a[y1][x1] == a[y2][x2]) {
            for(int j = 1; j < count; j++) {
                if(used[4*(j-1)] == y1 && used[4*(j-1)+1] == x1 && used[4*(j-1)+2] == y2 && used[4*(j-1)+3] == x2) {
                    flag1 = 1;  
                    break;

                }
            }
			a[y1][x1] = '*';
			a[y2][x2] = '*';
			if(flag1 != 1) {
                win += 2;
                used[4*(i-1)] = y1;
                used[4*(i-1)+1] = x1;
                used[4*(i-1)+2] = y2;
                used[4*(i-1)+3] = x2;
                count += 4;
                if(win != 2*N*N*2) {
        			for(int y = 0; y < 2 * N; y++) {
        				for(int x = 0; x < 2 * N; x++) {
        					if(flag == 0) {
        						printf("%c", a[y][x]);
        					} else {
        						printf(" %c", a[y][x]);
        					}
        					flag++;
        				}
        				printf("\n");
        				flag = 0;
        			}
                } else {
                    printf("Congratulations!\n");
                    break;
        		}
            } else {
                flag1 = 0;
            }
        } else if(flag1 == 1) {
            printf("Uh-oh\n");
            used[4*(i-1)] = y1;
            used[4*(i-1)+1] = x1;
            used[4*(i-1)+2] = y2;
            used[4*(i-1)+3] = x2;
            count += 4;
    		fail++;
    		if(fail == 3) {
    			printf("Game Over\n");
    			break;
    		} 
    	} else {
    		printf("Uh-oh\n");
            used[4*(i-1)] = y1;
            used[4*(i-1)+1] = x1;
            used[4*(i-1)+2] = y2;
            used[4*(i-1)+3] = x2;
            count += 4;
    		fail++;
    		if(fail == 3) {
    			printf("Game Over\n");
    			break;
    		} 
    	}
	}
}
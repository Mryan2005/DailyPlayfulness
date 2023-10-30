#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
	int yourmun;
	scanf("%d", &yourmun);
	srand(yourmun);
	int mynum = rand() % 100;
	scanf("%d", &yourmun);
	srand(yourmun);
	int N = rand();
	int c = 0;
	while (1) {
		scanf("%d", &yourmun);
		if (c > N) {
			printf("Game Over");
			printf("\n");
			break;
		} else if (yourmun < 0 ) {
			printf("Game Over");
			printf("\n");
			break;
		} else {
			if (yourmun > mynum) {
				printf("Too big");
				printf("\n");
				c++;
			} else if ( yourmun < mynum) {
				printf("Too small");
				printf("\n");
				c++;
			} else if (yourmun == mynum) {
				if (c == 1) {
					printf("Bingo!");
					printf("\n");
				} else if (c <= 3) {
					printf("Lucky You!");
					printf("\n");
				} else if (c > 3) {
					printf("Good Guess!");
					printf("\n");
				}
				break;
			}
		}
	}
	return 0;
}

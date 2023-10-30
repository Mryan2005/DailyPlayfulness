#include <stdio.h>
int main() {
	double price = 0.0, sum = 0.0;
	int choose,c = 1;
	printf("[1] apple\n");
	printf("[2] pear\n");
	printf("[3] orange\n");
	printf("[4] grape\n");
	printf("[0] exit\n");
	for (int i = 1; i < 5; i++) {
		scanf("%d", &choose);
		switch(choose) {
		case 1:
			price = 3.00;
			sum += price;
			printf("price = %.2f\n",price);
			break;
		case 2:
			price = 2.50;
			sum += price;
			printf("price = %.2f\n",price);
			break;
		case 3:
			price = 4.10;
			sum += price;
			printf("price = %.2f\n",price);
			break;
		case 4:
			price = 4.10;
			sum += price;
			printf("price = %.2f\n",price);
			break;
		case 0:
			c = 0;
			break;
		default:
			price = 0.0;
			printf("price = %.2f\n",price);
		}
		if ( c == 0) {
			break;
		}
	}
	printf("price = %.2f\n",sum);
}

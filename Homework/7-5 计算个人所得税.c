#include <stdio.h>
double function(int reward) {
	double rate = 0,tax;
	if (reward > 0 && reward <= 1600) {
		return 0;
	} else if (reward > 1600 && reward <= 2500) {
		rate = 0.05;
		tax = rate * ( reward - 1600 );
	} else if (reward > 2500 && reward <= 3500) {
		rate = 0.1;
		tax = rate * ( reward - 1600 );
	} else if (reward > 3500 && reward <= 4500) {
		rate = 0.15;
		tax = rate * ( reward - 1600 );
	} else if (reward > 4500) {
		rate = 0.2;
		tax = rate * ( reward - 1600 );
	} else 
		tax = 0;
	return tax;
}
int main() {
	double reward;
	scanf("%lf",&reward);
	printf("%0.2f",function(reward));
}

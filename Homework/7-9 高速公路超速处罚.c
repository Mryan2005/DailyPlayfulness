#include <stdio.h>
int main() {
	double speed,limit;
	scanf("%lf %lf",&speed,&limit);
	if ((speed - limit)/limit >= 0.1 && (speed - limit)/limit < 0.5) {
		printf("Exceed %.0f%%. Ticket 200",( speed - limit ) / limit * 100);
	} else if ((speed - limit)/limit >= 0.5) {
		printf("Exceed %.0f%%. License Revoked",(speed - limit)/limit * 100);
	} else {
		printf("OK");
	}
}

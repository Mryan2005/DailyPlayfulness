#include <stdio.h>
int main() {
	int day;
	scanf("%d",&day);
	if ( day % 4 == 0 || day % 5 == 0) {
		printf("Fishing in day %d",day);
	} else {
		printf("Drying in day %d",day);
	}
}

/*
  1 fishing 1%4 = 1	1%5 = 1
  2 fishing 2%4 = 2	2%5 = 2	
  3 fishing 3%4 = 3
  4 drying	4%4 = 0
  5 drying	5%4 = 1
  6 fishing
  7 fishing
  8 fishing
 */

#include <stdio.h>
int main() {
	int space = 0,id;
	char a;
	do {
		a = getchar();
		if(a == ' ') {
			space = 1;
		}
		if (space == 1 && a != ' ') {
			id = (int)a;
			id -= 32;
			printf("%c",id);
			id = 0;
			space = 0;
		} else {
			printf("%c",a);
		}
	} while ( a != '\n');
}

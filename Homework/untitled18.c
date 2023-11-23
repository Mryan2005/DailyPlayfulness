#include <stdio.h>
int main() {
	char ch;
	ch = getchar();
	int id;
	while (ch != '\n') {
		id = (int)ch;
		if(ch >= 'a' && ch <= 'z') {
			id = id - 32 + 1;
		} else if(ch >= 'A' && ch < 'Z') {
			id = id + 32 + 1;
		} else if (ch == 'Z') {
			id = 97;
		} else if (ch == 'z') {
			id = 65;
		}
		printf("%c",id);
		ch = getchar();
	}
}

#include <stdio.h>
#include <string.h>

#define MAXN 20
typedef enum {false, true} bool;

bool palindrome( char *s );

int main()
{
	char s[MAXN];
	
	scanf("%s", s);
	if ( palindrome(s)==true )
		printf("Yes\n");
	else
		printf("No\n");
	printf("%s\n", s);
	
	return 0;
}

/* 你的代码将被嵌在这里 */
bool palindrome( char *s ) {
	int a = strlen(s);
	int sum = 0;
	if(a % 2 == 0) {    // 总数是双数情况
		for(int i = 0,j = a - 1; i < j; i++, j--) {
			if(s[i] == s[j]) {
				sum++;
			}
		}
	} else {    // 总数是单数情况
		for(int i = 0,j = a - 1; i < j; i++, j--) {
			if(s[i] == s[j]) {
				sum++;
			}
		}
	}
	if(sum == a/2) {
		return 1;
	} else {
		return 0;
	}
}

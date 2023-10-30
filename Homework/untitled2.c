#include <stdio.h>
int main() {
	const int n;
	int input,min;
	scanf("%d", &n);
	int nums[n];
	for (int i = 0; i < n; i++) {
		scanf("%d", &input);
		nums[i] = input;
	}
	min = nums[0];
	for (int i = 0; i <= n; i++) {
		if (nums[i] < min) {
			min = nums[i];
		}
	}
	printf("min = %d", min);
}

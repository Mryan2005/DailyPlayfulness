#include <stdio.h>
int nums[] = {0,1,2,3,4,5,6,7,8,9,10,11};    // 假设有一个数组
int main() {
	int need = 12; // 需要取出10
	int len = sizeof(nums)/sizeof(nums[0]), mid = len/2;
	int result,left = 0,right = len - 1;
	while(left < right) {
		if(nums[mid] < need) {    // 中间的比需要的小，left右移
			left = mid + 1;
			mid = (left + right)/2;
		} else if (nums[mid] > need) {    // 中间的比需要的大，right右移
			right = mid - 1;
			mid = (left + right)/2;
		} else {
			result = mid;
			break;
		}
	}
	printf("result = %d",result);
}    

#include <stdio.h>
int main() {
    int nums,digit,nums_ = 0;
    scanf("%d",&nums);
    int mask = 0;
    do {
        digit  = nums % 10;
        nums /= 10;
        nums_ += digit;
        nums_ *= 10;
        mask++;
    } while(nums > 0);
    nums_ /= 10;
    do {
        digit  = nums_ % 10;
        nums_ /= 10;
        printf("%d ",digit);
        mask--;
    } while(mask > 0);
}
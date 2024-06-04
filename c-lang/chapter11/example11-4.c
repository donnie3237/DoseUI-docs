#include <stdio.h>

void main() {
    int nums[] = {80, 23, 61, 72, 34, 56};

    int n = sizeof(nums) / sizeof(nums[0]);

    for (int *pt = &nums[0]; pt < &nums[n]; pt += 1) {
        printf("%d ", *pt);
    }
}
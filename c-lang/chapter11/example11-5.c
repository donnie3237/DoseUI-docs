#include <stdio.h>

void main() {
	int nums[] = {80, 23, 61, 72, 34, 56};
	int n = sizeof(nums) / sizeof(nums[0]);
	int *pt = nums, sum = 0;

	while (pt < &nums[n]) {
		sum += *pt++;
	}

	printf("sum = %d", sum);
}

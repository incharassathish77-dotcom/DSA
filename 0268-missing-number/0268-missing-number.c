int missingNumber(int* nums, int numsSize) {
    int sum = (numsSize * (numsSize + 1)) / 2;
    int sum_loop = 0;

    for (int i = 0; i <= numsSize - 1; i++) {
        sum_loop = sum_loop + nums[i];
    }

    return sum - sum_loop;
}
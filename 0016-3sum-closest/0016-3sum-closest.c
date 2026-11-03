int threeSumClosest(int* nums, int numsSize, int target) {
    int min_diff = 2147483647;
    long long closest_sum = 0;

    for (int i = 0; i < numsSize - 2; i++) {
        for (int j = i + 1; j < numsSize - 1; j++) {
            for (int k = j + 1; k < numsSize; k++) {
                int sum = nums[i] + nums[j] + nums[k];
                int diff = target - sum;
                if (diff < 0) diff = -diff;

                if (diff < min_diff) {
                    min_diff = diff;
                    closest_sum = sum;
                }
            }
        }
    }

    return (int)closest_sum;
}
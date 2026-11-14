
int dominantIndex(int* nums, int numsSize) {
    int max1 = -1;
    int max2 = -1;
    int maxIndex = -1;

    // Single pass to find the largest and second-largest elements
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] > max1) {
            max2 = max1;
            max1 = nums[i];
            maxIndex = i;
        } else if (nums[i] > max2) {
            max2 = nums[i];
        }
    }

    // Check if the largest element is at least twice the second-largest
    if (max1 >= 2 * max2) {
        return maxIndex;
    }

    return -1;
}


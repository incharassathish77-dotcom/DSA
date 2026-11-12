/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findErrorNums(int* nums, int numsSize, int* returnSize) {
    int* result = malloc(2 * sizeof(int));
    int* count = calloc(numsSize + 2, sizeof(int));
    for (int i = 1; i <= numsSize; i++) {
        count[nums[i - 1]]++;
    }
    for (int i = 1; i <= numsSize; i++) {
        if (count[i] == 2)
            result[0] = i;
        else if (count[i] == 0)
            result[1] = i;
    }
    *returnSize = 2;
    return result;
}
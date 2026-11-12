int cmp(const void* a, const void* b){
    return *(int*)a - *(int*)b;
}
int arrayPairSum(int* nums, int numsSize) {
    int res = 0;
    qsort(nums, numsSize, sizeof(int), cmp);
    for(int i = 0; i < numsSize; i += 2)
        res += nums[i];
    return res;
}
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* runningSum(int* nums, int numsSize, int* returnSize) {
    int *arr=(int *)malloc(numsSize*sizeof(int));
    int sum=0;
    int count=0;
    for(int i=0;i<numsSize;i++){
        sum=sum+nums[i];
        arr[i]=sum;
        count++;   
    }
    *returnSize=count;
    return arr;
    
}
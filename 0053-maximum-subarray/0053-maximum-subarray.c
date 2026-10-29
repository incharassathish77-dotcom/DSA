int maxSubArray(int* nums, int numsSize) {
    if(numsSize<=0) return 0;

    int cmax=nums[0];
    int max=nums[0];

    for(int i=1;i<numsSize;i++){
        if(cmax+nums[i]>nums[i]){
            cmax=cmax+nums[i];
        }else{
            cmax=nums[i];
        }

        if(cmax>max) max=cmax;
    }

    return max;

    
}
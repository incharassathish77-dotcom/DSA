void moveZeroes(int* nums, int numsSize) {
    int count=0;
    int j=0;
    for(int i=0;i<numsSize;i++){
        if(nums[i]==0){
            count++;
        }else{
            nums[j++]=nums[i];
        }
    }
    while(count>0){
        nums[j++]=0;
        count--;
    }
   
}
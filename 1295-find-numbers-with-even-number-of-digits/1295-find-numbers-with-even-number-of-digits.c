int findNumbers(int* nums, int numsSize) {
    int digit=0;
    
    for(int i=0;i<numsSize;i++){
        int count=0;
        int temp=nums[i];
        while(temp>0){
            int digit=temp%10; 
            count++;
            temp=temp/10;    
        }
        if(count%2==0){

            digit++;

        }
    }
    return digit;
}
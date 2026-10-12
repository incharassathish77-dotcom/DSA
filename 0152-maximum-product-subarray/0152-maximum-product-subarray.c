int maxProduct(int* nums, int numsSize) {
    if (nums == NULL || numsSize == 0) {
        return 0;
    }
    
    int minProd = nums[0];
    int maxProd = nums[0];
    int result = nums[0];  
    
    for (int i = 1; i < numsSize; i++) {
        int currentNum = nums[i];
        
        int Min = minProd * currentNum;
        int Max = maxProd * currentNum;
        
        int newMin = Min;
        if (Max < newMin){
           newMin = Max;
        }
        if (currentNum < newMin){
             newMin = currentNum;
        }
        
        int newMax = Min;
        if (Max > newMax){
             newMax = Max;
        }
        if (currentNum > newMax){
             newMax = currentNum;
        }
        
        minProd = newMin;
        maxProd = newMax;
        result = (newMax > result) ? newMax : result;  // ← Update global max!
    }
    
    return result;
}
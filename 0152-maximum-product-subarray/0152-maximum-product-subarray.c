int maxProduct(int* nums, int numsSize) {
    if (nums == NULL || numsSize == 0) {
        return 0;
    }
    
    int minProd = nums[0];
    int maxProd = nums[0];
    int result = nums[0];
    
    for (int i = 1; i < numsSize; i++) {
        int Num = nums[i];
        
        int Min = minProd * Num;
        int Max = maxProd * Num;
        
        int newMin = Min;
        if (Max < newMin){
           newMin = Max;
        }
        if (Num < newMin){
             newMin = Num;
        }
        
        int newMax = Min;
        if (Max > newMax){
             newMax = Max;
        }
        if (Num > newMax){
             newMax = Num;
        }
        
        minProd = newMin;
        maxProd = newMax;
        result = (newMax > result) ? newMax : result;  // ← Update global max!
    }
    
    return result;
}
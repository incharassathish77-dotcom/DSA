int thirdMax(int* nums, int numsSize) {
    long long max = LLONG_MIN;
    long long sec = LLONG_MIN;
    long long thi = LLONG_MIN;
    
    for (int i = 0; i < numsSize; i++) {
        long long val = nums[i];
        
        // Skip numbers we've already tracked as distinct maxes
        if (val == max || val == sec || val == thi) {
            continue;
        }
        
        if (val > max) {
            thi = sec;
            sec = max;
            max = val;
        } else if (val > sec) {
            thi = sec;
            sec = val;
        } else if (val > thi) {
            thi = val;
        }
    }
    
    // If fewer than 3 distinct elements exist, return max
    if (thi == LLONG_MIN) {
        return (int)max;
    }
    
    return (int)thi;
}

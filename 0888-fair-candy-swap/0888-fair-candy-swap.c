
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* fairCandySwap(int* aliceSizes, int aliceSizesSize, int* bobSizes, int bobSizesSize, int* returnSize) {
    int sumA = 0, sumB = 0;
    
    // Track which candy sizes Bob has (max size is 100,000)
    bool bobHas[100001] = {false};
    
    for (int i = 0; i < aliceSizesSize; i++) {
        sumA += aliceSizes[i];
    }
    
    for (int i = 0; i < bobSizesSize; i++) {
        sumB += bobSizes[i];
        bobHas[bobSizes[i]] = true;
    }
    
    // Equation: sumA - x + y = sumB - y + x  =>  y = x + (sumB - sumA) / 2
    int diff = (sumB - sumA) / 2;
    
    int* result = (int*)malloc(2 * sizeof(int));
    *returnSize = 2;
    
    for (int i = 0; i < aliceSizesSize; i++) {
        int targetBob = aliceSizes[i] + diff;
        if (targetBob >= 1 && targetBob <= 100000 && bobHas[targetBob]) {
            result[0] = aliceSizes[i];
            result[1] = targetBob;
            return result;
        }
    }
    
    return result;
}
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* selfDividingNumbers(int left, int right, int* returnSize) {
    int *arr = (int *)malloc((right - left + 1) * sizeof(int));
    int count = 0;
    for(int i= left;i<=right;i++){
        int temp=i;
        int is=1;
        while(temp>0){
            int digit=temp%10;

            if (digit == 0 || i % digit != 0) {
                is = 0;
                break;
            }
            temp /= 10;
            
        }
        if (is) {
            arr[count++] = i;
        }
        
    }
    *returnSize = count;
    return arr;

}
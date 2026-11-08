/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* constructRectangle(int area, int* returnSize) {
    *returnSize=2;
    int* arr=(int*)malloc(*returnSize*sizeof(int));
    int l=area;
    int w=1;
    for(int i=(int)sqrt(area);i>=1;i--)
    {
        if(area%i==0)
        {
            w=i;
            l=area/i;
            break;
        }
    }
    arr[0]=l;
    arr[1]=w;
    return arr;
}
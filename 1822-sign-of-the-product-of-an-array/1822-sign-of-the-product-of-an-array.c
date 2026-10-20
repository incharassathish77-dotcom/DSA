int signFunc(double product){
    if(product>0)
        return 1;
    else if(product<0)
        return -1;
    else
        return 0;
}
int arraySign(int* nums, int numsSize) {
    double m=1;
    for(int i=0;i<numsSize;i++){
        m*=nums[i];
    }
    int res=signFunc(m);
    return res;

}

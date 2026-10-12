int subtractProductAndSum(int n) {
    int temp=n,sum=0,product=1;
    while(temp>0){
        int digit=temp%10;
        sum+=digit;
        product=product*digit;
        temp=temp/10;

    }
    return product-sum;
    
}
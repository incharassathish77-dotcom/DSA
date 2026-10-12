int addDigits(int num) {
    while(num>=10){
    int temp=num,sum=0;
    while(temp>0){
        int digit=temp%10;
        sum=sum+digit;
        temp=temp/10;
     }
     num=sum;
    }
    return num;
}
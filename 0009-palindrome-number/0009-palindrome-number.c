bool isPalindrome(int x) {
    int temp=x;
    double sum=0;
    while(temp>0){
        int dig=temp%10;
        sum=sum*10+dig;
        temp=temp/10;
    }
    
    
    if(sum==x){
        return true;
    }
    else{
        return false;
    }
}
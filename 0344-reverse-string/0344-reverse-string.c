void reverseString(char* s, int sSize) {
    char temp;
    int l=0;
    int r=sSize-1;
   while(l<r){
    temp=s[l];
    s[l]=s[r];
    s[r]=temp;

    l++;
    r--;
   }
}
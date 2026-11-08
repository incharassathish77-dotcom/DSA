char * solve(char* s1,char * s2,int n,int m)
{
    int l=n<m?m:n;
    char* ans=malloc(sizeof(char )*(l+2));
    int temp=0,store=0;
    n--;
    m--;
    ans[l+1]='\0';
    while(m!=-1)
    {
        store=s1[n]+s2[m]+temp-96;
        ans[l]=store%10 + 48;
        temp=store/10;
        n--;
        m--;
        l--;
    }
    while(n!=-1)
    {
        store=s1[n]+temp-48;
        ans[l]=store%10 + 48;
        temp=store/10;
        n--;
        l--;
    }
    if(temp==0)
        return ans+1;
    ans[0]='1';
    return ans;    
}

char* addStrings(char* num1, char* num2) {
    int n=strlen(num1),m=strlen(num2);
    if(n>=m)
        return solve(num1,num2,n,m);
    return solve(num2,num1,m,n);
}
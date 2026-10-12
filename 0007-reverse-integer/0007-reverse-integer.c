int reverse(int x) {
    int temp = x, sum = 0;
    while (temp != 0) {
        int digit = temp % 10;
        
       
       
         if (sum > 2147483647 / 10 || (sum == 2147483647 / 10 && digit > 7)) return 0;
        if (sum < -2147483648 / 10 || (sum == -2147483648 / 10 && digit < -8)) return 0;
        sum = sum * 10 + digit;
        temp = temp / 10;
    }
    return sum;
}
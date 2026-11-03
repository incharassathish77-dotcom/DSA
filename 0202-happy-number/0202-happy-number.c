bool isHappy(int n) {

    // Continue until the number becomes 1 (happy)
    // or 4 (unhappy cycle)
    while(n != 1 && n != 4)
    {
        // Store the sum of squares of digits
        int ans = 0;

        // Process every digit of n
        while(n > 0)
        {
            // Get the last digit
            int x = n % 10;

            // Add the square of the digit
            ans += x * x;

            // Remove the last digit
            n = n / 10;
        }

        // Use the calculated sum as the new number
        n = ans;
    }

    // 1 means happy, 4 means unhappy
    return n == 1;
}
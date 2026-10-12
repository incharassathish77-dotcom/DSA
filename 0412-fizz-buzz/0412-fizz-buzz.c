/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

char** fizzBuzz(int n, int* returnSize) {
    *returnSize = n;
    char **arr = (char **)malloc(n * sizeof(char*));
    
    for (int i = 0; i < n; i++) {
        int num = i + 1;
        
        if (num % 3 == 0 && num % 5 == 0) {
            arr[i] = (char *)malloc(9 * sizeof(char));
            strcpy(arr[i], "FizzBuzz");
        }
        else if (num % 3 == 0) {
            arr[i] = (char *)malloc(5 * sizeof(char));
            strcpy(arr[i], "Fizz");
        }
        else if (num % 5 == 0) {
            arr[i] = (char *)malloc(5 * sizeof(char));
            strcpy(arr[i], "Buzz");
        }
        else {
            // Count digits for the number string
            int temp = num;
            int digits = 0;
            while (temp > 0) {
                digits++;
                temp /= 10;
            }
            
            // Allocate memory for the number string (+1 for '\0')
            arr[i] = (char *)malloc((digits + 1) * sizeof(char));
            arr[i][digits] = '\0';
            
            // Fill characters from right to left
            temp = num;
            for (int j = digits - 1; j >= 0; j--) {
                arr[i][j] = (temp % 10) + '0';
                temp /= 10;
            }
        }
    }
    return arr;
}
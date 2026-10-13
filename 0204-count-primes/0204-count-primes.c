// int countPrimes(int n) {
//     if(n<=2){
//         return 0;
//     }
//     int count=0;
//     for(int i=2;i<n;i++){
//         int isprime=1;
//         for(int j=2;j<=i/2;j++){
//             if(i%j==0){
//                 isprime=0;
//                 break;
//             }    
//         }
//         if(isprime){
//             count++;
//         }

//     }
//     return count;
// }






int countPrimes(int n) {
    if (n <= 2) {
        return 0;
    }
    
    // Allocate a tracking array dynamically
    char* isPrime = (char*)malloc(n * sizeof(char));
    for (int i = 0; i < n; i++) {
        isPrime[i] = 1;
    }
    
    isPrime[0] = 0;
    isPrime[1] = 0;
    
    // Cross out multiples of each prime starting from p * p
    for (int p = 2; p * p < n; p++) {
        if (isPrime[p]) {
            for (int i = p * p; i < n; i += p) {
                isPrime[i] = 0;
            }
        }
    }
    
    int count = 0;
    for (int i = 2; i < n; i++) {
        if (isPrime[i]) {
            count++;
        }
    }
    
    free(isPrime);
    return count;
}






    
bool checkIfPangram(char* sentence) {
    int freq[26] = {0};
    int uniqueCount = 0;
    
    for (int i = 0; sentence[i] != '\0'; i++) {
        int index = sentence[i] - 'a';
        
        // If this character hasn't been seen yet, mark it and increment count
        if (freq[index] == 0) {
            freq[index] = 1;
            uniqueCount++;
            
            // Optimization: Early exit if we found all 26 letters
            if (uniqueCount == 26) {
                return true;
            }
        }
    }
    
    return false;
}
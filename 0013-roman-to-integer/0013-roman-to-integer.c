

int getValue(char c) {
    switch(c) {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
        default: return 0;
    }
}

int romanToInt(char* s) {
    int sum = 0;
    int l = strlen(s);
    
    for (int i = 0; i < l; i++) {
        int current = getValue(s[i]);
        
        // If the current value is less than the next value, subtract it
        if (i + 1 < l && current < getValue(s[i + 1])) {
            sum -= current;
        } else {
            sum += current;
        }
    }
    
    return sum;
}
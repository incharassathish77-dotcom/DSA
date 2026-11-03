char* convertToTitle(int columnNumber) {
    char* result = malloc(8);
    int len = 0;
    
    while (columnNumber > 0) {
        columnNumber--;
        result[len++] = 'A' + (columnNumber % 26);
        columnNumber /= 26;
    }
    result[len] = '\0';
    
    for (int i = 0; i < len / 2; i++) {
        char temp = result[i];
        result[i] = result[len - 1 - i];
        result[len - 1 - i] = temp;
    }
    
    return result;
}
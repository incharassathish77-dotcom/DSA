char findTheDifference(char* s, char* t) {
    long sum = 0, diff = 0;

    for (int i = 0; t[i] != '\0'; i++) {
        sum += t[i] - 'a';
    }

    for (int i = 0; s[i] != '\0'; i++) {
        diff += s[i] - 'a';
    }

    return (char)(sum - diff + 'a');
}
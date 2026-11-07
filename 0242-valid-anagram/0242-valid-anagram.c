bool isAnagram(char* s, char* t) {
    if (strlen(s) != strlen(t)) {
        return false;
    }
    int len = strlen(s);
    int* charCountS = (int*)calloc(26, sizeof(int));
    int* charCountT = (int*)calloc(26, sizeof(int));
    for (int i = 0; i < len; i++) {
        charCountS[s[i] - 'a']++;
    }
    for (int i = 0; i < len; i++) {
        charCountT[t[i] - 'a']++;
    }
    bool result = true;
    for (int i = 0; i < 26; i++) {
        if (charCountS[i] != charCountT[i]) {
            result = false;
            break;
        }
    }
    free(charCountS);
    free(charCountT);
    return result;
}
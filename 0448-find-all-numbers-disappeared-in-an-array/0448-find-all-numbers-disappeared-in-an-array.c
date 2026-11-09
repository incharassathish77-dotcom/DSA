int* findDisappearedNumbers(int* arr, int size, int* outSize) {
    
    for (int i = 0; i < size; i++) {
        int pos = abs(arr[i]) - 1;

        if (arr[pos] > 0) {
            arr[pos] = -arr[pos];
        }
    }

    for(int i = 0; i < size; i++)
        printf("%d ", arr[i]);

    int* missing = (int*)malloc(sizeof(int) * size);
    int idx = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] > 0) {
            missing[idx++] = i + 1;
        }
    }

    *outSize = idx;
    return missing;
}

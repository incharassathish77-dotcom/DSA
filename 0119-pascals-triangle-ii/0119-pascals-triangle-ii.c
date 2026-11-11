int* getRow(int rowIndex, int* returnSize) {
    // Initialize a 2D array to represent Pascal's Triangle
    int** pascalTriangle = (int**)malloc(2 * sizeof(int*));
    for (int i = 0; i < 2; i++) {
        pascalTriangle[i] = (int*)malloc((rowIndex + 1) * sizeof(int));
    }

    // Initialize the first row with a single element '1'
    pascalTriangle[0][0] = 1;
    int currentRow = 1;

    // Generate the rest of the rows
    for (int i = 1; i <= rowIndex; i++) {
        // The first element of each row is always '1'
        pascalTriangle[currentRow][0] = 1;

        // Calculate and populate the middle elements of the row
        for (int j = 1; j < i; j++) {
            pascalTriangle[currentRow][j] = pascalTriangle[1 - currentRow][j] + pascalTriangle[1 - currentRow][j - 1];
        }

        // The last element of each row is also '1'
        pascalTriangle[currentRow][i] = 1;

        // Switch rows
        currentRow = 1 - currentRow;
    }

    *returnSize = rowIndex + 1;

    // Copy the row to a 1D array
    int* resultRow = (int*)malloc((rowIndex + 1) * sizeof(int));
    for (int i = 0; i <= rowIndex; i++) {
        resultRow[i] = pascalTriangle[1 - currentRow][i];
    }

    return resultRow;
}
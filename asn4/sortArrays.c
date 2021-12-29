/* CS2211a 2021 */
/* Assignment Four (03) */
/* Ameena Naqvi */
/* November 10, 2021 */
int arraySort(int **numArray, int numRows, int numCols){
	// In this method we sort the 2D array like it is a 1D array of size numRows * numCols
	int i, j, variabletoSwitch;

	for (i = 0; i < numRows * numCols - 1; ++i) {
		for (j = 0; j < numRows * numCols - 1 - i; ++j) {
			// This is the corresponding row number of the 2D array: row = j/numCols
			// This is the corresponding column number of the 2D array: column = j%numCols
			if (numArray[j / numCols][j % numCols] > numArray[(j + 1) / numCols][(j + 1) % numCols]) {
				variabletoSwitch = numArray[(j + 1) / numCols][(j + 1) % numCols];
				numArray[(j + 1) / numCols][(j + 1) % numCols] = numArray[j / numCols][j % numCols];
				numArray[j / numCols][j % numCols] = variabletoSwitch;

			}
		}
	}

	return 0;
}

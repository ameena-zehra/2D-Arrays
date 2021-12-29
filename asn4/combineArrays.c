/* CS2211a 2021 */
/* Assignment Four (04) */
/* Ameena Naqvi */
/* November 10, 2021 */
int combineArrays(int ***nTables, int numArray, int numRows, int numCols){
    // Iterates through the full array using a nested for loop
    for (int i=0; i<numArray; i++){
        for (int j=0; j<numRows; j++){
            for (int k=0; k<numCols; k++){ 
                nTables[numArray][j][k]+= nTables[i][j][k];     // Populates the final array with the sums of the cells of the other arrays
            }
        }
        
    }
    return 0;
}

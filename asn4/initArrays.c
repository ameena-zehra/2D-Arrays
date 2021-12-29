/* CS2211a 2021 */
/* Assignment Four (03) */
/* Ameena Naqvi */
/* November 10, 2021 */
int initArrays(int ***nTables, int numArray, int numRows, int numCols){
    // nTables will contain third degree pointer ***nTables
    // Iterates through the full array using a nested for loop
    for (int i=0; i<numArray+1; i++){
        nTables[i] = (int **) calloc(numRows, sizeof(int*));    // Dynamically allocates nTables[i] space in memory based on the number of rows given
        for (int j=0; j<numRows; j++){
            nTables[i][j] = (int *) calloc(numCols, sizeof(int));   // Dynamically allocates nTable[i][j] space in memory based on the number of columns given
            for (int k=0; k<numCols; k++){
                // Populates the 3D array with numbers between 1 to 10 times the total number of elements in the collection
                // Element in collection= numArray*numCols*numRows
                if (i!=numArray){
                    int elementsinCollection = numArray*numCols*numRows;
                    int lower = 1, upper = 10*elementsinCollection; 
                    int randomizedint = (rand() % (upper-lower+1))+lower;
                    nTables[i][j][k] = randomizedint;       // Stores a randomizedint in the cells of nTables[i][j][k]
                }
                else{
                    nTables[i][j][k] = 0;   // For the last row fill it with zeroes
                }
               
                
            }
        }
        
    }
    return 0;

    

}

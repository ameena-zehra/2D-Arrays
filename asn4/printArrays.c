/* CS2211a 2021 */
/* Assignment Four (03) */
/* Ameena Naqvi */
/* November 10, 2021 */
int printArrays(int ***nTables, int numArray, int numRows, int numCols, int printingFormat){
    // Based on the printing format integer given goes through two different protocols
    if (printingFormat==1){
        // If printingFormat is 1 the complete list will be printed
        for (int i=0; i<numArray+1; i++){
            if (i==numArray){
                printf("\n\nArray of Combined Totals based on %d arrays\n", i+1);
            }
            else{
                printf("\n\nArray Number : %d\n", i+1);
            }
            for (int j=0; j<numRows; j++){
                for (int k=0; k<numCols; k++){ 
                    printf("%5d", nTables[i][j][k]); // Prints each cell in the list
                }
                printf("\n");
            }
            
        }

    }
    if (printingFormat==0){
        // If printingFormat is 0 only the last array will print sorted in ascending order
        printf("\n\nArray of Combined Totals based on %d arrays Sorted Ascending\n", numArray+1);
        for (int j=0; j<numRows; j++){
            for (int k=0; k<numCols; k++){ 
                printf("%5d", nTables[numArray][j][k]); // Prints all the cells of the last array in the list
            }
            printf("\n");
        }
        // Frees all dynamic memory to prevent memory leakage
        for (int i=0; i<numArray+1; i++){
            for (int j=0; j<numRows; j++){
                free(nTables[i][j]);      // Frees dynamic memory allocated for pointer nTable[i][j]
            }
        }
        for (int i=0; i<numArray+1; i++){
            free(nTables[i]);             // Frees dynamic memory allocated for pointer nTable[i]       
        }
        free(nTables);                     // Frees dynamic memory allocated for full pointer nTable

    }
    return 0;

}

/* CS2211a 2021 */
/* Assignment Four (04) */
/* Ameena Naqvi */
/* November 10, 2021 */
#include "headers.h"
int main()
{
    int nArrs, row, column;     // nArrs, row and column are the user defined dimension of the 3D array
    int ***nTables;             // nTables represents a 3D pointer used to store the array
    
    printf("\nEnter the number or arrays (0 to quit): ");
    scanf("%d", &nArrs);        // Scans the values entered by the user and equates them to the number of arrays
    while ( nArrs !=0){
        printf("\n Enter values for Rows, Columns (e.g 2,3): ");
        scanf("%d %d", &row, &column);      // Gets user defined parameters for the array
        nTables = (int ***) calloc(nArrs +1, sizeof(int**));    // Defines nTables based on the number of arrays stated by the user
        initArrays(nTables, nArrs, row, column);                // Initializes the array using a function in in the initArray.c file
        combineArrays(nTables, nArrs, row, column);             // Combines the arrays by making the last array equal to the totals of each cell in the array
        printArrays(nTables, nArrs, row, column, PRINTFULLLIST);    // Uses the generic method printArrays and prints the full list of arrays stored in nTables
        arraySort(nTables[nArrs], row, column);     // Sorts the last array of totals in ascending order
        printArrays(nTables, nArrs, row, column, PRINTTOTALSORTED); // Prints the total sorted array
        printf("\nXXXXXX END OF SESSION XXXXXX\n\n");
        printf("Enter the number of arrays (0 to quit) : "); // Loops back to the original statement repeating the process again until the user enters 0
        scanf("%d", &nArrs);
    }
    return 0;

}

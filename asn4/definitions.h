/* CS2211a 2021 */
/* Assignment Four (03) */
/* Ameena Naqvi */
/* November 10, 2021 */
// any preprocessor definitions
// all function prototypes- functions used in main defined in other functions
 #ifndef DEFINITIONS_H_INCLUDED
 #define DEFINITIONS_H_INCLUDED
 #define PRINTFULLLIST 1
 #define PRINTTOTALSORTED 0
    #include "initArrays.c"
    #include "combineArrays.c"
    #include "printArrays.c"
    #include "sortArrays.c"
    int initArrays(int***, int, int, int);
    int combineArrays(int***, int, int, int);
    int printArrays(int***, int, int, int, int);
    int arraySort(int **, int, int);
#endif // DEFINITIONS_H_INCLUDED

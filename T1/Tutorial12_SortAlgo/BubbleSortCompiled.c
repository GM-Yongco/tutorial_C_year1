/*
Description     : Code that will impress u ;)
Author          : G.M. Yongco #BeSomeoneWhoCanStandByShinomiya
Date            : ur my date uwu
*/
// ~~~~~~~~~~~~~~~~~~~HEAD~~~~~~~~~~~~~~~~~~~
#include <stdio.h>
#include "BubbleSort.h"

// ~~~~~~~~~~~~~~~~~~~MAIN~~~~~~~~~~~~~~~~~~~
int main(){
    printf("~~~~~~~~~~~~~~~~~~~START~~~~~~~~~~~~~~~~~~~\n");

    //INPUT ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    // Int~~~~~~~~~
    int intElements;

    printf("Enter # of ints: ");
    scanf("%i", &intElements);

    int int1D[intElements];

    for(int i = 0; i < intElements; i++){
        printf("Enter int element #%i: ", i+1);
        scanf("%i", &int1D[i]);
    }

    // 1D~~~~~~~~~~

    char string1d[99];

    printf("Enter string: ");
    scanf("%s", string1d);

    // 2D~~~~~~~~~~
    int Index1;

    printf("Enter # of strings: ");
    scanf("%i", &Index1);

    char string2d[Index1][99];
    for(int i = 0; i < Index1; i++){
        printf("Enter string2d element #%i: ", i+1);
        scanf("%s", string2d[i]);
    }

    //SORT ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

    sortInts(int1D, intElements, is_greater);
    sortChar(string1d, is_lesser);
    sortStr(string2d, Index1, is_lesser);

    //OUTPUT ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    printf("\nSorted~~~~~~~~~~~~~~\n");

    // Prints all elemets of the in array and their respective index value
    for(int i = 0; i < intElements; i++){
        printf("Int Element #%i: %i\n", i+1, int1D[i]);
    }

    // Prints the string of characters
    printf("Sorted 1Dstring: %s\n", string1d);

    // Prints the array of strings and their respective index value
    for(int i = 0; i < Index1; i++){
        printf("Str Element #%i: %s\n", i+1, string2d[i]);
    }

    printf("\n~~~~~~~~~~~~~~~~~~~~END~~~~~~~~~~~~~~~~~~~");
    return 0;
}
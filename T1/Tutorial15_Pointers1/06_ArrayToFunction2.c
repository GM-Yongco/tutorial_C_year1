/*
Description     : Code that will impress u ;)
Author          : G.M. Yongco #BeSomeoneWhoCanStandByShinomiya
Date            : ur my date uwu
*/
// ~~~~~~~~~~~~~~~~~~~HEAD~~~~~~~~~~~~~~~~~~~
#include <stdio.h>
#define s 99

// ~~~~~~~CustomFunctionInitialization~~~~~~~
int TestPrint(int *A, int Asize){
    for (int i = 0; i < Asize; i++){
        printf("\n Int on index %i in the array is: %i\n",i,  *(A + i));
    }
}

// ~~~~~~~~~~~~~~~~~~~MAIN~~~~~~~~~~~~~~~~~~~
int main(){
    printf("~~~~~~~~~~~~~~~~~~~START~~~~~~~~~~~~~~~~~~~\n");
    
    //VARABLES~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    // int s = 99;
    // for some reason the int s wont be used in the array size
    int g[s] = {1,2,3,4,5};
    int *pg = g;

    //VERCICT~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    TestPrint( pg, s);

    printf("\n~~~~~~~~~~~~~~~~~~~~END~~~~~~~~~~~~~~~~~~~");
    return 0;
}

// ~~~~~~~~~~~~~~CustomFunctions~~~~~~~~~~~~~

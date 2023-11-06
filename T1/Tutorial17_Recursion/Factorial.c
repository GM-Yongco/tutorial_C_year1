/*
Description     : Code that will impress u ;)
Author          : G.M. Yongco #BeSomeoneWhoCanStandByShinomiya
Date            : ur my date uwu
*/
// ~~~~~~~~~~~~~~~~~~~HEAD~~~~~~~~~~~~~~~~~~~
#include <stdio.h>
#include <stdlib.h>

// ~~~~~~~CustomFunctionInitialization~~~~~~~
int Factorial();

// ~~~~~~~~~~~~~~~~~~~MAIN~~~~~~~~~~~~~~~~~~~
int main(){
    printf("~~~~~~~~~~~~~~~~~~~START~~~~~~~~~~~~~~~~~~~\n");
    
    int x = 5;

    x = Factorial(x);

    printf("%i", x);

    printf("\n~~~~~~~~~~~~~~~~~~~~END~~~~~~~~~~~~~~~~~~~");
    return 0;
}

// ~~~~~~~~~~~~~~CustomFunctions~~~~~~~~~~~~~
int Factorial(int x){
    if(x == 1){
        return x;
    }else{
        return x*Factorial(x-1);
    }
    // I think using a negative integer as a parameter would lead to an infinity loop
}
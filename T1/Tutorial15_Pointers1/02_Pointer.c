/*
Description     : Code that will impress u ;)
Author          : NxM Jules
Date            : ur my date uwu
*/
// ~~~~~~~~~~~~~~~~~~~HEAD~~~~~~~~~~~~~~~~~~~
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#define PI 3.1416

// ~~~~~~~~~~~~~~GlobalVariables~~~~~~~~~~~~~
char inspo1[] = "Do things that make you love yourself :DDD";
char inspo2[] = "Be someone who can stand by Shinomiya";
char inspo3[] = "PLUS ULTRAAA";

// ~~~~~~~~~~~~~~CustomFunctions~~~~~~~~~~~~~
int CustomOwO(){}

// ~~~~~~~~~~~~~~~~~~~MAIN~~~~~~~~~~~~~~~~~~~
int main(){
    printf("~~~~~~~~~~~~~~~~~~~START~~~~~~~~~~~~~~~~~~~\n");
    // pointers have dynamic allocation of memory, idk what that means yet
    // the allocation also happens during run time so they values can be different but it is relatively the same within the code

    int g = 69;
    // datatype *var_name
    int* gp = &g;
    /*
    can pass arguments by reference/addresses or value
        - referencing value name only passes as value if not a pointers
    used to pass structures
    can pass multiple values and arrays
    */ 

    /*
    normal variables have a ptr address that stores a value
    pointers have a ptr address that stores a ptr address of another value
    */

    /*
    reference "&" points to an adress
    - &variable will return the address of the variable
    deference "*" as part of the delaration  to delcare a value
    - when deference isnt used in the declaration but on the 
    */

    /*
    %p for pointers in strings
    format specifier for pointers, which is written in c
    passing an int to p makes it hexadecimal
    */

    printf("\n~~~~~~~~~~~~~~~~~~~~MID~~~~~~~~~~~~~~~~~~~\n");

    printf("first: %p\n", gp);
    printf("second: %i", *gp);

    // dont try to set an address, it might crash your computer settings
    printf("\n~~~~~~~~~~~~~~~~~~~~MID2~~~~~~~~~~~~~~~~~~~\n");

    // equivalent
    int e = 3;
    int *f;
    f = &e;

    
    int *a, b = 5;  
    a = &b;
    // in this delclaration, only a is a pointer, c is a normal variable

    (*a)++;
    //also changes b

    printf("b = %i", b);
    printf("\na = %i", *a);
    printf("\naddress of a = %p", a);

    printf("\n~~~~~~~~~~~~~~~~~~~~END~~~~~~~~~~~~~~~~~~~");
    return 0;
}

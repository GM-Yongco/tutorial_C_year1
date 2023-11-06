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

// ~~~~~~~~~~~~~~CustomFunctions~~~~~~~~~~~~~
void fun1() { printf("Im the first kind of fun\n"); }
void fun2() { printf("Im the second kind of fun thats not actually fun like the quiet game my parents like to play in the car\n"); }

void wrapper(void (*pointfunc)())
{
    //runs all the functions inside this funciton
    pointfunc();
}

// ~~~~~~~~~~~~~~~~~~~MAIN~~~~~~~~~~~~~~~~~~~
int main()
{
    printf("~~~~~~~~~~~~~~~~~~~START~~~~~~~~~~~~~~~~~~~\n");

    wrapper(fun1);
    wrapper(fun2);

    printf("\n~~~~~~~~~~~~~~~~~~~~END~~~~~~~~~~~~~~~~~~~");
    
    return 0;
}
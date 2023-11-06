
/*
Description     : Code that will impress u ;)
Author          : G.M. Yongco #BeSomeoneWhoCanStandByShinomiya
Date            : ur my date uwu
*/
// ~~~~~~~~~~~~~~~~~~~HEAD~~~~~~~~~~~~~~~~~~~
#include <stdio.h>
#include <stdlib.h>
#define PI 3.1416

// ~~~~~~~CustomFunctionInitialization~~~~~~~
int TestPrint(char *A[], char *B[]){
    printf("%s, %s \n", A, B);
}

// ~~~~~~~~~~~~~~~~~~~MAIN~~~~~~~~~~~~~~~~~~~
int main(){
    printf("~~~~~~~~~~~~~~~~~~~START~~~~~~~~~~~~~~~~~~~\n");
    
    //VARABLES~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    char s1[99], s2[99];

    //INPUT~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    printf("Enter string 1: ");
    scanf("%s", s1);
    printf("Enter string 2: ");
    scanf("%s", s2);

    //VERCICT~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

    TestPrint(&s1, &s2);

    printf("\n~~~~~~~~~~~~~~~~~~~~END~~~~~~~~~~~~~~~~~~~");
    return 0;
}

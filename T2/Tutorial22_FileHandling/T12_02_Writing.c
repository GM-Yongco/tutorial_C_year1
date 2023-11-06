/*
Description     : Code that will impress u ;)
Author          : G.M. Yongco #BeSomeoneWhoCanStandByShinomiya
Date            : ur my date uwu
*/
// ~~~~~~~~~~~~~~~~~~~HEAD~~~~~~~~~~~~~~~~~~~
#include <stdio.h>


// ~~~~~~~~~~~~~~~~~~~MAIN~~~~~~~~~~~~~~~~~~~
int main(){
    printf("~~~~~~~~~~~~~~~~~~~START~~~~~~~~~~~~~~~~~~~\n");
    
    FILE* fptr;

    fptr = fopen("NEWTEXT.txt", "w");
    //if the text file doesnt exist, it will create a new one

    fputs("IT IS FINE NOW, WHY?\n", fptr);
    fputs("BECAUSE I AM HERE?\n", fptr);

    fclose(fptr);
    //note: this erases whatever was inside the text file at first

    printf("\n~~~~~~~~~~~~~~~~~~~~END~~~~~~~~~~~~~~~~~~~");
    return 0;
}
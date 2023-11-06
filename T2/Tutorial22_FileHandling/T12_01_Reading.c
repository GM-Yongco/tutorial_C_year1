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

    fptr = fopen("TEXT.txt", "r");
    //"r" is on reading mode just like in python

    char content[1000];

    while(fgets(content, 1000, fptr)){
        printf("%s", content);
    }
    //note: no need "\n" after every line because there is "\n" already within the text file

    fclose(fptr);

    printf("\n~~~~~~~~~~~~~~~~~~~~END~~~~~~~~~~~~~~~~~~~");
    return 0;
}
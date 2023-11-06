
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
    
    //VARABLES~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    char reason[99] = "ReaSOn";
    char *PReason = reason;


    //VERCICT~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

    printf("filler\n");

    printf("%s", PReason);
    
    printf("\nFILLERRRR\n");

    while(*PReason != '\0'){
        printf("%c", *PReason);
        *PReason++;
    }

    printf("\n~~~~~~~~~~~~~~~~~~~~END~~~~~~~~~~~~~~~~~~~");
    return 0;
}

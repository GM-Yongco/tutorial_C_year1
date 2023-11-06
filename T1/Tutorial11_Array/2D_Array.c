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

    char s[99][5];
    
    for(int i = 0; i<5; i++){
        scanf("%s", s[i]);
    }

    for(int i = 0; i<5; i++){
        printf("%s - ", s[i]);
    }

    printf("\n~~~~~~~~~~~~~~~~~~~~END~~~~~~~~~~~~~~~~~~~");
    return 0;
}
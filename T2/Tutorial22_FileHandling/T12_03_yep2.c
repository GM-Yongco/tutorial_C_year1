/*
Description     : Code that will impress u ;)
Author          : G.M. Yongco #BeSomeoneWhoCanStandByShinomiya
Date            : ur my date uwu
*/
// ~~~~~~~~~~~~~~~~~~~HEAD~~~~~~~~~~~~~~~~~~~
#include <stdio.h>
#include <string.h>

// ~~~~~~~~~~~~~~~~~~~MAIN~~~~~~~~~~~~~~~~~~~
int main(){
    printf("~~~~~~~~~~~~~~~~~~~START~~~~~~~~~~~~~~~~~~~\n");

    FILE* THEFILE;

    THEFILE = fopen("WAKANDAFOREVER.txt", "r");
    char TempContent1[1000];
    char TempContent2[9999]; 

    char EnasTongue[] = "Rubber Babby\n";

    while(fgets(TempContent1, 1000, THEFILE)){
        strcat(TempContent2, TempContent1);
        printf("%s", TempContent1);
    }
    //prints and stores the lines of the text file

    fclose(THEFILE);
    
    strcat(TempContent2, EnasTongue);
    THEFILE = fopen("WAKANDAFOREVER.txt", "w");
    fputs(TempContent2, THEFILE);
    fclose(THEFILE);

    printf("\n~~~~~~~~~~~~~~~~~~~~END~~~~~~~~~~~~~~~~~~~");
    return 0;
}

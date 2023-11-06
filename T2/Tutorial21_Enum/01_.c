/*
Description     : Code that will impress u ;)
Author          : G.M. Yongco #BeSomeoneWhoCanStandByShinomiya
Date            : ur my date uwu
*/
// ~~~~~~~~~~~~~~~~~~~HEAD~~~~~~~~~~~~~~~~~~~
#include <stdio.h>
#include <stdlib.h>
#define PI 3.1416

enum Menu{ExtraSmall, Small, Medium, Large, ExtraLarge};
/*
enums are basically python dictionaries
and declared the same way structrues are
*/

// ~~~~~~~~~~~~~~~~~~~MAIN~~~~~~~~~~~~~~~~~~~
int main(){
    printf("~~~~~~~~~~~~~~~~~~~START~~~~~~~~~~~~~~~~~~~\n");
    
    enum Menu selection[6];
    selection[0] = ExtraSmall;
    selection[1] = Small;
    selection[2] = ExtraLarge;

    int i;
    for(i = 0; i<3; ++i){
         printf("%d: %d\n", i, selection[i]);
    }
   

    printf("\n~~~~~~~~~~~~~~~~~~~~END~~~~~~~~~~~~~~~~~~~");
    return 0;
}
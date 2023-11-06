/*
Description     : Code that will impress u ;)
Author          : G.M. Yongco #BeSomeoneWhoCanStandByShinomiya
Date            : ur my date uwu
*/
// ~~~~~~~~~~~~~~~~~~~HEAD~~~~~~~~~~~~~~~~~~~
#include <stdio.h>
#include <stdlib.h>
#define PI 3.1416

enum Menu{
    MajorSmall,
    ExtraExtraSmall,
    ExtraSmall = 69, 
    Small = 21, 
    Medium, 
    Large, 
    ExtraLarge
};
/*
enums are basically python dictionaries but only for numbers which is weird
and declared the same way structrues are

by default, they would return their "index" as if it was an array but if defined, 
their position, the all the other variable thingies after them would be redefined as well
*/

// ~~~~~~~~~~~~~~~~~~~MAIN~~~~~~~~~~~~~~~~~~~
int main(){
    printf("~~~~~~~~~~~~~~~~~~~START~~~~~~~~~~~~~~~~~~~\n");
    
    enum Menu selection[6];
    selection[0] = ExtraExtraSmall;
    selection[1] = ExtraSmall;
    selection[2] = Small;
    selection[3] = ExtraLarge;
    selection[4] = MajorSmall;
    

    int i;
    for(i = 0; i<5; ++i){
         printf("%d: %d\n", i, selection[i]);
    }

    printf("69: %c", (char)selection[1]);
    //69 is upper calse E in ascii code
   

    printf("\n~~~~~~~~~~~~~~~~~~~~END~~~~~~~~~~~~~~~~~~~");
    return 0;
}
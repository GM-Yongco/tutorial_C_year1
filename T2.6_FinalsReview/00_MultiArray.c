/*
Description     : Code that will impress u ;)
Author          : G.M. Yongco #BeSomeoneWhoCanStandByShinomiya
Date            : ur my date uwu
*/
#include <stdio.h>
#include <stdlib.h>

#include "00_MultiArray.h"

int main(){
    printf("\nSTART----------------------------------------\n");
    
    int** arr = CreateMulti();

    printf("%d", arr[1][2]);
    
    printf("\nEND------------------------------------------\n");
    return 0;
}

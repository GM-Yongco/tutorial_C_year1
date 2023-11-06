/*
Description     : Code that will impress u ;)
Author          : G.M. Yongco #BeSomeoneWhoCanStandByShinomiya
Date            : ur my date uwu
*/
// ~~~~~~~~~~~~~~~~~~~HEAD~~~~~~~~~~~~~~~~~~~
#include <stdio.h>
#include <ctype.h>
#include <string.h>

// ~~~~~~~~~~~~~~~~~~~MAIN~~~~~~~~~~~~~~~~~~~
int main(){

    //VARABLES~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    char s1[99];

    
    //INPUT ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    printf("Enter the word: ");
    scanf("%s", s1);

    //ALL LOWERCASE OF INPUT ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    for(int i = 0; i<strlen(s1); i++){
        s1[i] = toupper(s1[i]);
    }

    //SORT ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    char temp;

    for(int i = 0; i<strlen(s1) -1 ; i++){


        if (s1[i] > s1[i+1]){
            for(int j = i-1; j>0 ; j--){
                

            }


            temp = s1[i+1];
            s1[i+1] = s1[i];
            s1[i] = temp;
        }
    }


    //OUTPUT~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    printf("%s", s1);

    printf("\n~~~~~~~~~~~~~~~~~~~~END~~~~~~~~~~~~~~~~~~~");
    return 0;
}
/*
Description     : Code that will impress u ;)
Author          : NxM Jules
Date            : ur my date uwu
*/
// ~~~~~~~~~~~~~~~~~~~HEAD~~~~~~~~~~~~~~~~~~~
#include <stdio.h>

// ~~~~~~~~~~~~~~~~~~~MAIN~~~~~~~~~~~~~~~~~~~
int main(){
    printf("~~~~~~~~~~~~~~~~~~~START~~~~~~~~~~~~~~~~~~~\n");

    char alphabet[26] = {'A'};

    for(int i = 1; i<26; i++){
        alphabet[i] = alphabet[i-1]+1;
    }

    for(int i = 0; i<26; i++){
        printf("%c - ", alphabet[i]);
    }
    
    printf("\n~~~~~~~~~~~~~~~~~~~~END~~~~~~~~~~~~~~~~~~~");
    return 0;
}
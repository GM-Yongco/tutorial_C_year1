/*
Description     :
Author          :
Date            :
Location        :
*/
// ~~~~~~~~~~~~~~~~~~HEADER~~~~~~~~~~~~~~~~~~
#include <stdio.h>
#include <ctype.h>
// ~~~~~~~~~~~~~~~~GlobalVars~~~~~~~~~~~~~~~~~~
char ans;
// ~~~~~~~~~~~~~~~~CFunctions~~~~~~~~~~~~~~~~~~
int funkOwO(){
    
}
// ~~~~~~~~~~~~~~~~~~~MAIN~~~~~~~~~~~~~~~~~~~
int main(){
    printf("~~~~~~~~~~~~~~~~~~~START~~~~~~~~~~~~~~~~~~~\n");
    
    printf("Are you having fun, owo? (Y/n): ");
    scanf("%c", &ans);

    switch (toupper(ans)){
    case 'Y': printf("yay"); break;
    case 'N': printf("Naurrr\n");
    case 'Z': printf("This is what happens when you dont break"); break;
    default: printf("invalid"); break;
    }

    int ansi4;

    printf("\nGive me a number between 0 and 10: ");
    scanf("%i", &ansi4);

    switch (ansi4)
    {
        case 1:
        case 2:
        case 3: 
            printf("I KNEW IT WAS BETWEEN 4 AND 0 :DDD"); 
            break;
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9: printf("I dont like that number"); break;
        case 10: printf("I said BETWEEN"); break;
        
        default: printf("I said BETWEEN 0 and 10 >:("); break;
    }

    printf("\n~~~~~~~~~~~~~~~~~~~~END~~~~~~~~~~~~~~~~~~~");
    return 0;
}
    
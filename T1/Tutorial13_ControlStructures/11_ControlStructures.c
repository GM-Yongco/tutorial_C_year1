/*
Description     :
Author          :
Date            :
Location        :
*/
// ~~~~~~~~~~~~~~~~~~~HEAD~~~~~~~~~~~~~~~~~~~
#include <stdio.h>

// ~~~~~~~~~~~~~~~~~~~MAIN~~~~~~~~~~~~~~~~~~~
int main(){
    printf("~~~~~~~~~~~~~~~~~~~START~~~~~~~~~~~~~~~~~~~\n");

    char ans;

    printf("Do you want to have fun? (y/n): ");
    scanf("%c", &ans);

    if(ans == 'Y'|| ans == 'y'){
        printf("YAY!!!");
    }else{
        printf("*middle finger*");
    }

    printf("\n~~~~~~~~~~~~~~~~~ANOTHER~~~~~~~~~~~~~~~~~~");
    //boolean value if statement

    int ansi;

    printf("\nIll tell u if the int is even or odd: ");
    scanf("%i", &ansi);

    int result  = ansi%2;
    /* 1 = true, 0 = false
    my 2 guesses as to how this works is that
    - psueudo true or false
    - boolean typecasting
    */
    if(result){ 
        printf("ODD");
    }else if (!result){
        printf("EVEN");
    }
    
    printf("\n~~~~~~~~~~~~~~~~~ANOTHER~~~~~~~~~~~~~~~~~~");
    //an equivalent of an if staement

    int ansi2;

    printf("\nIll tell u again if the int is even or odd: ");
    scanf("%i", &ansi2);

    int result2  = ansi2%2;

    result2 ? printf("ODD") : printf("EVEN");

    printf("\n~~~~~~~~~~~~~~~~~ANOTHER~~~~~~~~~~~~~~~~~~");

    int ansi3;

    printf("\nIll tell something about the number you give me: ");
    scanf("%i", &ansi3);

    int result3  = ansi3%5;

    result3 == 0 ? printf("The number is divisible by 5") : printf("I dont like that number");

    printf("\n~~~~~~~~~~~~~~~~~ANOTHER~~~~~~~~~~~~~~~~~~");

    char letter;

    printf("Enter the letter: ");
    scanf("%c", &letter);

    letter = toupper(letter);

    (letter == 'A' ||
     letter == 'E' ||
     letter == 'I' ||
     letter == 'O' ||
     letter == 'U' ) ?
    (printf("Vowel")) : (printf("Consonant"));

    printf("\n~~~~~~~~~~~~~~~~~ANOTHER~~~~~~~~~~~~~~~~~~");

    int ansi4;

    printf("\nGive me a number between 0 and 10: ");
    scanf("%i", &ansi4);

    switch (ansi4)
    {
    case 1:break;
    case 2:
    case 3: printf("I KNEW IT WAS BETWEEN 4 AND 0 :DDD"); break;
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9: printf("I dont like that number"); break;
    case 10: printf("I said BETWEEN"); break;
    
    default: printf("I said BETWEEN 0 and 10"); break;
    }

    printf("\n~~~~~~~~~~~~~~~~~~~~END~~~~~~~~~~~~~~~~~~~");
    return 0;
}
    
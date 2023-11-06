#include<stdio.h>
#include <ctype.h>

int main(){
    char letter;

    printf("Enter the letter: ");
    scanf("%c", &letter);

    letter = toupper(letter);

    printf("the letter is %c\n", letter);
    printf("it is a ");

    (letter == 'A' ||
     letter == 'E' ||
     letter == 'I' ||
     letter == 'O' ||
     letter == 'U' ) ?
    (printf("Vowel")) : (printf("Consonant"));

    printf("\n~~~~~~~~~~~~~~~~~~~~MID~~~~~~~~~~~~~~~~~~~\n");

    int ansi2;
    printf("\nIll tell u if the int is even or odd: ");
    scanf("%i", &ansi2);

    int result2  = ansi2%2;

    result2 ? printf("ODD") : printf("EVEN");
    //0 is pseudo false, any other number is pseudo true

    return 0;
}
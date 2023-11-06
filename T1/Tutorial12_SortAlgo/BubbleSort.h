#include <string.h>

// GREATER LESSER VARIATION --------------------------------------

//is_greater to arrange from smallest to greatest
//is_lesser to arrange from greatest to smallest

int is_greater(int a, int b){
    return a > b;
}
int is_lesser(int a, int b){
    return a < b;
}

// BUBBLE SORTS --------------------------------------------------

/*

This is the base version of the bubble sort I like to use

void sortInts(int arr[], int len){
    int temp;

    for(int x = 1; x < len ; x++){
    for(int y = 0; y < len - x; y++){
        if( arr[y] > arr[y + 1]){
            temp = arr[y];
            arr[y] = arr[y + 1];
            arr[y + 1] = temp;
        }
    }}
}


note: this also works with sorting characters within a string 
cuz characters can be passed as and compared in thesame way ints can

base form of the string comparison thingy

void sortStr(char arr[][99], int len, int (*cmp)()){
    char temp[99];

    for(int x = 1; x < len ; x++){
    for(int y = 0; y < len - x; y++){
        if(strcmp(arr[y], arr[y + 1]) > 0){
            strcpy(temp, arr[y]);
            strcpy(arr[y], arr[y + 1]);
            strcpy(arr[y + 1], temp);
        }
    }}
}

the cmp function jsut makes it so that 
I can use greater than or lesser than depending on the function I choose to compare the 3 variables with
without needing to have 2 seprate long functions

the "if(cmp(arr[y], arr[y + 1]))" is equivalent to "if(a<b)"
*/

void sortInts(int arr[], int len, int (*cmp)()){
    int temp;

    for(int x = 1; x < len ; x++){
    for(int y = 0; y < len - x; y++){
        if( cmp(arr[y], arr[y + 1])){
            temp = arr[y];
            arr[y] = arr[y + 1];
            arr[y + 1] = temp;
        }
    }}
}

/* 
DISCLAIMER: 
the string sorters DO DISTINGUISH between upper case and lower case
and fyi, the upper case letters have lower ASCII values
if u want it to treat upper case and lower case letters thesame then u make ur own code owo, goodluck (*v*)
*/ 

void sortChar(char arr[], int (*cmp)()){
    int len = strlen(arr);
    int temp;

    for(int x = 1; x < len ; x++){
    for(int y = 0; y < len - x; y++){
        if( cmp(arr[y], arr[y + 1])){
            temp = arr[y];
            arr[y] = arr[y + 1];
            arr[y + 1] = temp;
        }
    }}
}

void sortStr(char arr[][99], int len, int (*cmp)()){
    char temp[99];

    for(int x = 1; x < len ; x++){
    for(int y = 0; y < len - x; y++){
        if( cmp(strcmp(arr[y], arr[y + 1]), 0)){
            strcpy(temp, arr[y]);
            strcpy(arr[y], arr[y + 1]);
            strcpy(arr[y + 1], temp);
        }
    }}
}
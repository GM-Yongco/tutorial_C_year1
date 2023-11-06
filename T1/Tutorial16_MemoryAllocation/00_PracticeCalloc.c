#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* Change(char arr[]){
    char* newArr = calloc(strlen(arr), sizeof(int));
    
    for(int i = 0; i < strlen(arr); ++i){
        if(arr[i] == '8'){
            newArr[i] = 'B';
        }else{
            newArr[i] = arr[i];
        }
    }
    return newArr;
}
int main(){
    char Original[] = "8008135";

    char* PTnumbero = Change(Original);

    printf("%s", PTnumbero);
    printf("\n%s", Original);

    /*
    printing the original after proves the original array wasnt tampered with 
    and that the pointer was a new array
    */
}
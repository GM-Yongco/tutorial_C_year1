#include <stdio.h>
#include <string.h>

int main(void){

    char stringy[] = "bangladesh";

    int len = strlen(stringy);

    char temp;
    
    for(int x = 1; x < len ; x++){
    for(int y = 0; y < len - x; y++){
        if(stringy[y] > stringy[y + 1]){
            temp = stringy[y];
            stringy[y] = stringy[y + 1];
            stringy[y + 1] = temp;
        }
    }}

    printf("%s", stringy);

}
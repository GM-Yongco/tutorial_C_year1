#include <stdio.h>
#include <ctype.h>
#include <string.h>

int sortStr();

int main(){

    //INPUT ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

    char s1[99];
    printf("Enter any string: ");
    scanf("%s", s1);

    int s1Len = strlen(s1);

    //ALL UPPERCASE OF INPUT ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    for(int i = 0; i<strlen(s1); i++){
        s1[i] = toupper(s1[i]);
    }

    //SORT ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    sortStr(s1, s1Len);

    //OOUTPUT ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    printf("Array after implementing bubble sort: ");
    printf("%s", s1);
    return 0;
}

int sortStr(char *stringy, int len){
    int temp;

    for(int x = 1; x < len ; x++){
    for(int y = 0; y < len - x; y++){
        if(stringy[y] > stringy[y + 1]){
            temp = stringy[y];
            stringy[y] = stringy[y + 1];
            stringy[y + 1] = temp;
        }
    }}

}
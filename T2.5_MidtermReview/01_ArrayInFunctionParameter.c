/*
Description     : Code that will impress u ;)
Author          : G.M. Yongco #BeSomeoneWhoCanStandByShinomiya
Date            : ur my date uwu
Actual Desctip  : Asks for an array of 5 integers then prints it in another funciton by passing an array as a parameter
*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void display(int TheArr[]){
    int itt;
    printf("{");
    for(itt = 1; itt<=TheArr[0]; itt++){
        printf("%d", TheArr[itt]);

        if(itt != TheArr[0]){
            printf(", ");
        }
    }
    printf("}\n");
}
void main(){
    int len = 5;

    int IntArr[len +1];
    IntArr[0] = len;

    int itt;
    for(itt = 1; itt<=len; itt++){
        printf("give me the %dth value: ", itt);
        scanf("%d", &(IntArr[itt]));
    }

    display(IntArr);
}


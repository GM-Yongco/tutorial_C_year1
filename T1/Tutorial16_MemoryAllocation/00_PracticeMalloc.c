/*
Description     : Code that will impress u ;)
Author          : G.M. Yongco #BeSomeoneWhoCanStandByShinomiya
Date            : ur my date uwu
*/
// ~~~~~~~~~~~~~~~~~~~HEAD~~~~~~~~~~~~~~~~~~~
#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 50

// ~~~~~~~CustomFunctionInitialization~~~~~~~

int *ArrayEditor();
void display();

// ~~~~~~~~~~~~~~~~~~~MAIN~~~~~~~~~~~~~~~~~~~
int main(){
    printf("~~~~~~~~~~~~~~~~~~~START~~~~~~~~~~~~~~~~~~~\n");

    //INPUT~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    int list[MAX_SIZE];

    printf("Enter number of souls: ");
    scanf("%d", &list[0]);

    printf("Enter soul scores: ");
    for(int i = 1; i <= list[0]; ++i){
        scanf("%d", &list[i]);
    }

    display(list);

    // ArrayEditor(list);

    int *listEB = ArrayEditor(list);
    display(listEB);
    display(list);

    //VERCICT~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

    printf("\n~~~~~~~~~~~~~~~~~~~~END~~~~~~~~~~~~~~~~~~~");
    return 0;
}
// ~~~~~~~CustomFunctions~~~~~~~~~~~~~~~~~~~~~~~~
void display(int arr[]) {
    printf("[");
    for(int i = 1; i <= arr[0]; ++i) {
        printf("%d", arr[i]);
        if(i < arr[0]) {
            printf("|");
        }
    }
    printf("], SOUL COUNT: %d\n", arr[0]);
}

int* ArrayEditor(int arr[]){
    int* NewArr = malloc(MAX_SIZE * sizeof(int));

    for(int i = 0; i<= arr[0]; i++){
        if((i % 2) == 0 && i != 0){
            NewArr[i] = 6980085;
        }else{
            NewArr[i] = arr[i];
        }
    }

    return NewArr;
}
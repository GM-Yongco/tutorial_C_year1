#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 50
#define INT_MIN -2147483648
#define INT_MAX 214748364

/*
my steps
1. find the second highest value
2. find the index of the second highest value
3. create new sorted array to return
4. print from said index
*/

void display(int arr[]);
int *sorting_souls(int arr[]);

int main() {
    int list[MAX_SIZE];
    int *sortedList;

    list[0] = 3;

    printf("Enter soul scores: ");

    list[1] = 59;
    list[2] = 54;
    list[3] = 21;

    //OUTPUT 1 --------------------------------------------------------------------------
    printf("Initial soul list: ");
    // Hey there, start typing your C code here...
    display(list);

    //IMPORTANT PART FOR ME -------------------------------------------------------------
    if(list[0] < 2){
        int *sortedList = list;
        *sortedList = 0;
    }
    else{
        int *sortedList = *sorting_souls(list);
    }

    //OUTPUT 2 --------------------------------------------------------------------------
    printf("Sorted soul list: ");
    // Hey there, start typing your C code here...
    display(sortedList);
    
    return 0;
}

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

int *sorting_souls(int arr[]){

    int high1 = INT_MIN;
    int high2 = INT_MIN;
    //stores the highest and second hightes value respectively

    int h2index;

    //STEP 1: finds the biggests and second biggest number
    for(int i = 1; i<=arr[0]; i++){
        if(arr[i] > high1){
            high2 = high1;   //transfers highest value to second highest
            high1 = arr[i];
        }else if(arr[i] > high2 && high1 != arr[i]){
            high2 = arr[i];
        }
    }

    //STEP 2: finds the index of the second highest number
    for(int i = 1; i<=arr[0]; i++){
        if(arr[i] == high2){
            h2index = i;
            break;
        }
    }

    // printf("\n-------------\n");
    // printf("h1 is %i \n", high1);
    // printf("h2 is %i \n", high2);
    // printf("index is %i \n", h2index);
    // printf("\n-------------\n");

    //STEP 3: creation of the sorted souls array to be returned
    int *sorted_souls = malloc(sizeof(int)*(arr[0] + 2 - h2index));
    sorted_souls[0] = arr[0] - h2index + 1;
    
    for(int i = 1; i <= sorted_souls[0]; i++){
        sorted_souls[i] = arr[h2index + i - 1];
        printf("\nsorted souls %i: %i\n", i,  sorted_souls[i]);
    }

    return sorted_souls;
}
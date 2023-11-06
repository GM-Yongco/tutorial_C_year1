#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 50
#define INT_MIN -2147483648
#define INT_MAX 214748364

/*
my steps
1. find the second highest value
2. find the index of the second highest value
3. print from said index
*/

void display(int arr[]);
int *sorting_souls(int arr[]);

int main() {
    int list[MAX_SIZE];

    printf("Enter number of souls: ");
    scanf("%d", &list[0]);

    printf("Enter soul scores: ");
    for(int i = 1; i <= list[0]; i++) {
        scanf("%d", &list[i]);
    }

    //OUTPUT 1 --------------------------------------------------------------------------
    printf("Initial soul list: ");
    // Hey there, start typing your C code here...
    display(list);

    //IMPORTANT PART FOR ME -------------------------------------------------------------
    if(list[0] < 2){
        list[0] = 0;
    }else{
        sorting_souls(list);        
    }

    //OUTPUT 2 --------------------------------------------------------------------------
    printf("Sorted soul list: ");
    // Hey there, start typing your C code here...
    display(list);
    
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

    //moves everything to a lower index so that the second highest number is on index 1
    for(int i = 1; i<=arr[0]; i++){
        arr[i] = arr[i+h2index-1];
    }
    //changes the total number of elements in the array
    arr[0] -= h2index-1;
}
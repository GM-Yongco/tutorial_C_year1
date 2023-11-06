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

    printf("Enter number of souls: ");
    scanf("%d", &list[0]);

    printf("Enter soul scores: ");
    for(int i = 1; i <= list[0]; ++i){
        scanf("%d", &list[i]);
    }

    //OUTPUT 1 --------------------------------------------------------------------------
    printf("Initial soul list: ");
    // Hey there, start typing your C code here...
    display(list);
    
    // if theres only one element in the list, then there isnt a second largest number
    // might as well skip straight to the last part and save computing power
    // now that I think about it, i dun think this is what was the intended implementation owo
    // but das easy to fix and I like my code so dat staying there
    if(list[0] < 2){
        *sortedList = 0;
    }else{
        sortedList = sorting_souls(list);
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

int* sorting_souls(int arr[]){

    int high1 = INT_MIN;
    int high2 = INT_MIN;
    //stores the highest and second hightes value respectively

    int h2index;

    //STEP 1: finds the biggests and second biggest number
    for(int i = 1; i<=arr[0]; i++){
        if(arr[i] > high1){
            high2 = high1;      //transfers highest value to second highest
            high1 = arr[i];     //then replaces highest value with the new value
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

    //STEP 3: creation of the sorted souls array to be returned
    int *sorted_souls = malloc(sizeof(int)*(arr[0] + 2 - h2index));
    sorted_souls[0] = arr[0] - h2index + 1;
    
    for(int i = 1; i <= sorted_souls[0]; i++){
        sorted_souls[i] = arr[h2index + i - 1];
    }

    return sorted_souls;
    free(sorted_souls);
}
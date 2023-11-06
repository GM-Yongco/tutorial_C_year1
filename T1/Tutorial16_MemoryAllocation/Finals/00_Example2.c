#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 50
#define INT_MIN -2147483648
#define INT_MAX 214748364

void display(int arr[]);
int *sorting_souls(int arr[]);

int main() {
    int list[MAX_SIZE];

    printf("Enter number of souls: ");
    scanf("%d", &list[0]);

    printf("Enter soul scores: ");
    for(int i = 1; i <= list[0]; ++i) {
        scanf("%d", &list[i]);
    }

    printf("Initial soul list: ");
    display(list);
    
    printf("Sorted soul list: ");
    int *sortedSouls = sorting_souls(list);
    display(sortedSouls);
    
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
// ----------------------------------------------------------
int *sorting_souls(int arr[]) {

    //LOOKS FOR THE BIGGEST NUMBER
    //sets the first element as the max number
    int max = arr[1];

    //scans the array for the biggest number
    for(int i = 1; i <= arr[0]; ++i) 
    {
        if(arr[i] > max)
            max = arr[i];
    }

    int second = 0;
    int ctr = 0;
    int occurence = 1;
    
    //scans the array for the second biggest number
    //basically looks for the biggest number again 
        //but wont allow if its equal to the current biggest number
    for(int i = 1; i <= arr[0]; ++i){
        if(arr[i] == max)
            continue;
        
        if(arr[i] > second)
        {
            second = arr[i];
            ctr = i;
        }
    }

    //finds the index of the first instance of the second highest number in the array
    /*
    BUG FOUND by Jules
        ctr shoulndt be initialized at 0 cuz there could be a coincidence 
        in which ctr is the same as the second highest value
        isnt actually a bug, I have no idea why this works but it does :)))
    */
    for(int i = ctr; i <= arr[0]; i++) 
    {
        printf("\n %i", ctr);
        if(arr[i] == second)
        {
            ctr = i;
            break;
        }
    }

    //printf("%d %d %d %d\n", max, second, ctr, arr[0]);

    int *sortedSouls = malloc(sizeof(int) * (arr[0] - ctr + 2));
    sortedSouls[0] = (arr[0] - ctr + 1);

    if(arr[0] == 1)
        sortedSouls[0] = 0;
    
    int count = 1;
    
    for(int i = ctr; i <= arr[0]; ++i) 
    {
        sortedSouls[count] = arr[i];
        count++;
    }
    
    return sortedSouls;
}
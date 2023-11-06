#include <stdio.h>

int main(){

    int arr[50], num, x, y, temp;    
    printf("Please Enter the Number of Elements you want in the array: ");
    scanf("%i", &num);    
    

    for(x = 0; x < num; x++){
        printf("Enter the Value of Element %i: ", x+1);
        scanf("%d", &arr[x]);
    }

    for(x = 1; x < num ; x++){
    for(y = 0; y < num - x; y++){
        if(arr[y] > arr[y + 1]){
            temp = arr[y];
            arr[y] = arr[y + 1];
            arr[y + 1] = temp;
        }
    }}

    printf("Array after implementing bubble sort: ");
    for(x = 0; x < num; x++){
        printf("\n%d", arr[x]);
    }
    return 0;
}
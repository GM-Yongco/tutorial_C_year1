#include <stdio.h>

int sortInt();
int sortStr();

int main(){

    //INPUT ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    int len;
    printf("Please Enter the Number of Elements you want in the array: ");
    scanf("%i", &len);

    int arr[len];
    for(int x = 0; x < len; x++){
        printf("Enter the Value of Element %i: ", x+1);
        scanf("%d", &arr[x]);
    }

    //SORT ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    sortInt(&arr, len);

    //OOUTPUT ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    printf("Array after implementing bubble sort: ");
    for(int x = 0; x < len; x++){
        printf("%d, ", arr[x]);
    }
    return 0;
}

int sortInt(int *arr, int len){
    int temp;

    for(int x = 1; x < len ; x++){
    for(int y = 0; y < len - x; y++){
        if(arr[y] > arr[y + 1]){
            temp = arr[y];
            arr[y] = arr[y + 1];
            arr[y + 1] = temp;
        }
    }}

}
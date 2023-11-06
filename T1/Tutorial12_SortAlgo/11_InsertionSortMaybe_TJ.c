#include <stdio.h>

int main(){
    int arr[50], num, x, y, temp;
    printf("Please Enter the Number of Elements you want in the array: ");
    scanf("%i", &num);

    for (x = 0; x < num; x++){
        printf("Enter the Value of Element %i: ", x + 1);
        scanf("%d", &arr[x]);
    }

    for (int i = 0; i < num; i++){
        for (int j = 0; j < num; j++){

            if (arr[i] < arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }

            printf("\n", arr[x]);
            for (x = 0; x < num; x++){
                printf("%d, ", arr[x]);
            }

        }
    }

    printf("Array after implementing bubble sort: ");
    for (x = 0; x < num; x++){
        printf("\n%d", arr[x]);
    }
    return 0;
}
#include <stdio.h>

int main(){
    int num_array[2][2] = {{1,2},{3,4}};

    for(int ctr1 = 0; ctr1 < 2; ctr1++) {
        for (int ctr2 = 0; ctr2 < 2; ctr2++) {
            printf("%d\t", num_array[ctr1][ctr2]);
        }
        printf("\n");
    }
}
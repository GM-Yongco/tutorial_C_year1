#include <stdio.h>
#include <unistd.h>

int main(){

    int count = 9;

    int i;
    for(i = 0; i<count; ++i){
        sleep(1);
        printf("it has been %d ", i+1);
        (i == 0) ? printf("second\n"): printf("seconds\n");
    }
    return 0;
}
//for some reason the program cant be ran more twice sequentially
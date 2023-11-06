#include<stdio.h>
#include<stdlib.h>

void main(){
    int i = 1;
    int j = 0;

    printf("%i\n", j&j);    // and
    printf("%i\n", j|i);    // or
    printf("%i\n", i^i);    // xor
    printf("%i bart\n", ~i);// complement (basically flip every bit)
    printf("%i\n\n", ~j);
    
    printf("%i\n", i << 4);   // shift left (makes the number bigger but a power of 2)
    printf("%i\n", i >> 1);   // shift right (makes the number smaller but a power of 2)
}
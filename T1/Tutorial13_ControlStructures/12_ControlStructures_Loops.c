#include <stdio.h>

int main()
{
    printf("~~~~~~~~~~~~~~~~~~~START~~~~~~~~~~~~~~~~~~~\n");
    
    system("cls");

    for(int i = 1; i<10; i = i + 2){
        printf("%i\n", i);
    }
    // considered as an entry controlled loop

    printf("~~~~~~~~~~~~~~~Now For BEEER~~~~~~~~~~~~\n");

    int a = 30;
    do{
        printf("%i beers on the wall\n", a);
        a++;
    }while(a<45);
    // the do while loop does the thingy first then checks afterwards  
    // considered as an exit controlled loop 

    printf("~~~~~~~~~~~~~~~Now Go DOWNNN~~~~~~~~~~~~\n");
    int b = 75;
    while(b>68){
        printf("%i beers on the wall\n", b);
        b = b - 2;
    }
    // considered as an entry controlled loop

    printf("\n~~~~~~~~~~~~~~~~~~~~END~~~~~~~~~~~~~~~~~~~");
    return 0;
}
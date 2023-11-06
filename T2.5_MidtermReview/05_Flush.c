/*
Description     : Code that will impress u ;)
Author          : G.M. Yongco #BeSomeoneWhoCanStandByShinomiya
Date            : ur my date uwu
*/
#include <stdio.h>
#include<stdlib.h>
int main()
{
    char str[20];
    int i;
    for (i=0; i<2; i++)
    {
        scanf("%[^\n]s", str);
        printf("%s\n", str);
        // fflush(stdin);
    }
    
    printf("with flush -------------------");
    
    for (i=0; i<2; i++)
    {
        scanf("%[^\n]s", str);
        printf("%s\n", str);
        fflush(stdin);
    }
    return 0;
}


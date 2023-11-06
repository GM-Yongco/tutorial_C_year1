#include <stdio.h>
#include <string.h>

int main()
{
    printf("~~~~~~~~~~~~~~~~~~~START~~~~~~~~~~~~~~~~~~~\n");
    char s[100] = "";
    printf("gib string bitch\t: ");
    scanf("%s", s);

    int n = strlen(s);

    printf("length of string\t: %i\n", n);
    printf("the reversed string\t: ");


    for(int i = (n-1); i >= 0; i--){
        printf("%c", s[i]);
    }

    printf("\n~~~~~~~~~~~~~~~~~~~~END~~~~~~~~~~~~~~~~~~~");
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// from lead zack in GDSC
char * greet(char greetee[])
{
    char *greetTemplate = (char *) malloc(500 * sizeof(char));
    strcpy(greetTemplate, "Good day to you sir, ");
    strcat(greetTemplate, greetee);
    return greetTemplate;
}
int main()
{
    printf("~~~~~~~~~~~~~~~~~~~START~~~~~~~~~~~~~~~~~~~\n");
    char TheName[99];
    printf("GIVE ME YOUR NAME: ");
    scanf("%s", TheName);
    printf("%s", greet(TheName));

    printf("\n~~~~~~~~~~~~~~~~~~~~END~~~~~~~~~~~~~~~~~~~");
    return 0;
}
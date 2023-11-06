#include <stdio.h>

int main(){
    int condition;

    printf("\nGive me 1, 2, 3, or 4: ");
    scanf("%i", &condition);

    if (condition == 1) {
        printf("YAY");
    } else if (condition == 2) {
        printf("YAY YAY");
    } else if (condition == 3) {
        printf("YAY YAY YAY");
    } else if (condition == 4) {
        printf("YAY YAY YAY YAY");
    } else {
        printf("BOGO YAWWA PISTE");
    }
}

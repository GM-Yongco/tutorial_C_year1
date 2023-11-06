/*
Description     : Code that will impress u ;)
Author          : G.M. Yongco #BeSomeoneWhoCanStandByShinomiya
Date            : ur my date uwu
*/

// ~~~~~~~~~~~~~~~~~~~HEAD~~~~~~~~~~~~~~~~~~~
#include <stdio.h>
#include <stdlib.h>
#define PI 3.1416

// ~~~~~~~CustomFunctionInitialization~~~~~~~
typedef struct employee{
	int age;
	char *name;

    union{
        float Salary;
        float YearLevel;
    }item;
    //
	
}employee;
/*
"struct student" is being redefined as just "employee"
the union of "Salary" and "YearLevel" share thesame memory location
*/

// ~~~~~~~~~~~~~~~~~~~MAIN~~~~~~~~~~~~~~~~~~~
int main(){
    printf("~~~~~~~~~~~~~~~~~~~START~~~~~~~~~~~~~~~~~~~\n");
    
    employee Katrina;
    Katrina.age = 19;  
    Katrina.name = "Katrina Ventura";
    Katrina.item.YearLevel = 1.5;

    employee Mark;
    Mark.age = 36;
    Mark.name = "Mark Kenneth Encot";
    Mark.item.Salary = 36000;

    employee *ptr[99] = {&Katrina, &Mark};

    int i;
    for(i = 0; i<2; ++i){
        printf("name\t\t: %s\n", ptr[i]->name);
        printf("age\t\t: %i\n", ptr[i]->age);
        printf("year-level\t: %.1f\n", ptr[i]->item.YearLevel);
        printf("\n--------------------\n");
    }

    printf("%d, %d, %d, %d", sizeof(Katrina.age), sizeof(Katrina.age), sizeof(Katrina.item.YearLevel), sizeof(employee));

    printf("\n~~~~~~~~~~~~~~~~~~~~END~~~~~~~~~~~~~~~~~~~");
    return 0;
}

// ~~~~~~~~~~~~~~CustomFunctions~~~~~~~~~~~~~



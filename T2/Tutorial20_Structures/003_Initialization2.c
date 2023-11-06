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
typedef struct student{
	int age;
	char *name;
	float YearLevel;
}student;

// ~~~~~~~~~~~~~~~~~~~MAIN~~~~~~~~~~~~~~~~~~~
int main(){
    printf("~~~~~~~~~~~~~~~~~~~START~~~~~~~~~~~~~~~~~~~\n");
    
	student Christian;
	Christian.name = "Christian Abay-abay";
	Christian.age = 19;
	Christian.YearLevel = 1.5;
	
	
	
	student Budz = { 21, "Raphael Matres", 2.5};
	
	/*
	can also be like this if you want to have a different order fromm the structure
	Budz = { .name = "Raphael Matres", .age = 21, .YearLevel = 2.5};
	*/
	
	
    //VERCICT~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	
    printf("name\t\t: %s\nage\t\t: %i\nyear-level\t: %.1f\n", Christian.name, Christian.age, Christian.YearLevel);
    printf("\n--------------------\n");
    printf("name\t\t: %s\nage\t\t: %i\nyear-level\t: %.1f\n", Budz.name, Budz.age, Budz.YearLevel);
	
    printf("\n~~~~~~~~~~~~~~~~~~~~END~~~~~~~~~~~~~~~~~~~");
    return 0;
}

// ~~~~~~~~~~~~~~CustomFunctions~~~~~~~~~~~~~



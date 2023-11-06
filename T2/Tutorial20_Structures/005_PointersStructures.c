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
//"struct student" is being redefined as just "student"

// ~~~~~~~~~~~~~~~~~~~MAIN~~~~~~~~~~~~~~~~~~~
int main(){
    printf("~~~~~~~~~~~~~~~~~~~START~~~~~~~~~~~~~~~~~~~\n");
    
    int i; // reserved for loops
    int count = 2;
	student USC[count];
	
	//USC[0] = { 21, "Raphael Matres", 2.5};		reminder: ask why this doesnt work
	
	USC[0].name = "Raphael Matres";
	USC[0].age = 21;
	USC[0].YearLevel = 2;
	
	USC[1].name = "Christian Abay-abay";
	USC[1].age = 19;
	USC[1].YearLevel = 1.5;
	
    //OUTPUT~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    
    /*
    all these are equivalent: 
    ptr->name
    (*ptr).name
    (*&USC[i]).name
    USC[i].name
    */
    
    for(i = 0; i<count; ++i){
    	student *ptr = &(USC[i]);
    	printf("name\t\t: %s\n", ptr->name);
    	printf("age\t\t: %i\n", ptr->age);
    	printf("year-level\t: %.1f\n", ptr->YearLevel);
    	printf("\n--------------------\n");
	}
	
    printf("\n~~~~~~~~~~~~~~~~~~~~END~~~~~~~~~~~~~~~~~~~");
    return 0;
}

// ~~~~~~~~~~~~~~CustomFunctions~~~~~~~~~~~~~



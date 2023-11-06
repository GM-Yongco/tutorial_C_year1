/*
Description     : Code that will impress u ;)
Author          : G.M. Yongco #BeSomeoneWhoCanStandByShinomiya
Date            : ur my date uwu
*/
#include<stdio.h>

void main(){
	
	//Gets function -----------------
	printf("give some random number: ");
	char x[99];
	gets(x);
	
	int y = atoi(x) + 1;
	
	printf("inputted number +1 is: %d\n", y);
	printf("another number tho\n");
	gets(x);
	
	printf("im lazy so heres your number back as a string %s", x);
	
}


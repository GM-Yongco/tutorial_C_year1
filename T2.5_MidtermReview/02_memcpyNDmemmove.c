/*
Description     : Code that will impress u ;)
Author          : G.M. Yongco #BeSomeoneWhoCanStandByShinomiya
Date            : ur my date uwu
*/
#include <stdio.h>
#include <string.h>

int main () {
	char src[50] = "http://www.tutorialspoint.com";
	
	char dest[50];
	strcpy(dest,"Heloooo!!");
	
	printf("Before memcpy dest \t= %s\n", dest);
	
	memcpy(dest, src, 5);
	/*
	basically the same as 
	strncpy(dest, src, 5);
	*/
	
	printf("After memcpy dest \t= %s\n", dest);
	
	//testing with int Arrays ----------------------------------
	
	printf("memcpy for int arrays ------------------------------")
	
	int ArrInt[] = {1, 5, 2, 4, 3};
	
	int itt;
	for(itt = 0; itt<5; itt++){
		printf("%d, ", ArrInt[itt]);
	}
	printf("\n");
	
	int ArrX[] = {1, 10, 2, 9, 3, 8, 4, 7, 5, 6};
	
	for(itt = 0; itt<10; itt++){
		printf("%d, ", ArrX[itt]);
	}
	printf("\n");
	
	memcpy(ArrX, ArrInt, 5*(sizeof(int)));//copies the first 5 integers
	
	for(itt = 0; itt<10; itt++){
		printf("%d, ", ArrX[itt]);
	}
	printf("\n");
	
	//testing with int Arrays ----------------------------------
	
	printf("memmov for strings ---------------------------------")
	
	/*
		basically the same but for overlapping stuff
	*/
	
	return(0);
}


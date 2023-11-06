/*
Description     : Code that will impress u ;)
Author          : G.M. Yongco #BeSomeoneWhoCanStandByShinomiya
Date            : ur my date uwu
*/
#include <stdio.h>
#include <string.h>
#include "03_SortingAlgu.h"

int main(){
	int len = 10;
	int arrx[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
	int arrTemp[len];
	
	printf("\nBubble Sort-----------------------\n");
	memcpy(arrTemp, arrx, sizeof(int)*len);
	SortBubble(arrTemp, len);
	display(arrTemp, len);
	
	printf("\nSelection Sort-----------------------\n");
	memcpy(arrTemp, arrx, sizeof(int)*len);
	SortSelection(arrTemp, len);
	display(arrTemp, len);
	
	printf("\nInsertion Sort-----------------------\n");
	memcpy(arrTemp, arrx, sizeof(int)*len);
	SortInsertion(arrTemp, len);
	display(arrTemp, len);
}


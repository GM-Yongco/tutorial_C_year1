/*
Description     : Code that will impress u ;D
Author          : G.M. Yongco #BeSomeoneWhoCanStandByShinomiya
Date            : ur my date uwu
*/
#include <stdio.h>
#include <stdlib.h>

// ---------------------------------------------
void IntSwap(int* x, int* y){
	int temp = *x;
	*x = *y;
	*y = temp;
}

int** CreateMulti(){
	int** arr = NULL;

	arr = malloc(sizeof(int*)* 3);

	int x;
	for(x = 0; x<3; x++){
		arr[x] = malloc(sizeof(int)* 3);
	}

	// arr = {
	// 	{1, 2, 3},
	// 	{4, 5, 6},
	// 	{7, 8, 9}
	// };

	*(*(arr)) = 1;
	*(*(arr)+1) = 2;
	*(*(arr)+2) = 3;

	*(*(arr+1)) = 4;
	*(*(arr+1)+1) = 5;
	*(*(arr+1)+2) = 6;
	
	*(*(arr+2)) = 7;
	*(*(arr+2)+1) = 8;
	*(*(arr+2)+2) = 9;

	return arr;
}

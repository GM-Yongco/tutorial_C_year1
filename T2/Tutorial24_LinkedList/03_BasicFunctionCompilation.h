/*
Description     : Code that will impress u ;D
Author          : G.M. Yongco #BeSomeoneWhoCanStandByShinomiya
Date            : ur my date uwu
*/
// ------------------------------------------
#include <stdio.h>
#include <stdlib.h>

// Structures -------------------------------
typedef struct node{
	int data;
	struct node* next;
}NODE, *LINK;

// Basic 1 ----------------------------------
void AllocateNode(LINK* x){
	*x = (LINK)malloc(sizeof(NODE));
	(*x)->next = NULL;
}
void DeleteNode(LINK* x){
	LINK temp = *x;
	*x = temp->next;
	free(temp);
}
void DeleteAll(LINK* x){
	while(*x != NULL){
		DeleteNode(x);
	}
}

void LLDisplay(LINK x){
	for(; x != NULL; x = x->next){
		printf("%d ", x->data);
	}
	printf("\n");
}

LINK* ReturnPTPos(LINK* x, int pos){
	/*
	note: returns null if the position number is past the number of nodes on the
	*/
	LINK* temp = x;
	
	int itt;
	for(itt = 0; itt<pos; itt++){
		if(*temp == NULL){break;}
		//for some reason the || doesnt work to add a condition
		//	¯\ ('3')/¯
		temp = &((*temp)->next);
	}
	return temp;
}
int ReturnNodeNumber(LINK x){
	//basically how many nodes until it reaches NULL
	int itt;
	for(itt = 0; x != NULL; x = x->next){
		itt++;
	}
	return itt;
}

// Meat 1 -----------------------------------
void InsertHere(LINK* x, int n){
	/*
	Inserts where ever the value in x points to
	also used as insert first when &head is given as a parameters
	*/
	
	LINK temp = NULL;
	AllocateNode(&temp);
	temp->data = n;
	temp->next = *x;
	
	*x = temp;
}
void InsertEnd(LINK* x, int n){
	LINK* temp = x;
	for(; *temp != NULL; temp = &(*temp)->next);
	InsertHere(temp, n);
}
void InsertPos(LINK* x, int pos, int n){
	LINK* temp = x;
	InsertHere(ReturnPTPos(temp, pos), n);
}

// Basic 2 ----------------------------------
void SwapWNext(LINK* x){
	// swaps a node with the one next to it
	if(*x == NULL){
		printf("Address holds null\n");
	}else if((*x)->next == NULL){
		printf("Next address holds null\n");
	}else{
		LINK temp1 = (*x);
		LINK temp2 = (temp1)->next;

		*x = temp2;
		(temp1)->next = (temp2)->next;
		(temp2)->next = (temp1);
	}
}
void SwapNonSequential(LINK* x, LINK *y){
	if(*x == NULL || *y == NULL){
		printf("An address holds null\n");
	}else if((x == NULL || y == NULL)){
		printf("Variables given were NULL\n");
	}else{
		LINK tempx1 = (*x);
		LINK tempx2 = (*x)->next;
		LINK tempy1 = (*y);
		LINK tempy2 = (*y)->next;

		(*x)->next = tempy2;
		(*y)->next = tempx2;
		*x = tempy1;
		*y = tempx1;
	}
}
void MoveToPos(LINK* GetsMoved, LINK* Location){
	//basically the InsertHere function but with existing nodes on the list

	if(*GetsMoved == NULL){
		printf("Link to be moved address holds null\n");
	}else{
		LINK temp1 = (*Location);
		LINK temp2 = (*GetsMoved)->next;

		*Location = *GetsMoved;
		(*GetsMoved)->next = temp1;
		*GetsMoved = temp2;
	}
}

void SwapNode(LINK* x, LINK *y){
	//just the compilation of functions SwapWNext and SwapNonSequential
	if((*x)->next == *y){
		SwapWNext(x);
	}else if((*y)->next == *x){
		SwapWNext(y);
	}else{
		SwapNonSequential(x, y);
	}
}
// Meat 2 -----------------------------------
void LLBubbleSort(LINK* x){
	//sorted left to right, smallest to biggest
	LINK* temp;
	LINK lastNode = NULL;
	for(;lastNode != *x; lastNode = (*temp)){
		for(temp = x; (*temp)->next != lastNode; temp = &(*temp)->next){
			if((*temp)->data > (*temp)->next->data){
				SwapWNext(temp);
			}
		}
	}
}
void LLSelectionSort(LINK* x){
	//sorted left to right, biggest to smallest to contrast the first sorting function	
	LINK* tempStart;
	LINK* trav;
	LINK* biggest;

	for(tempStart = x; *tempStart != NULL; tempStart = &((*tempStart)->next)){
		biggest = tempStart;
		for(trav = tempStart; *trav != NULL; trav = &(*trav)->next){
			if((*trav)->data > (*biggest)->data){
				biggest = trav;
			}
		}
		SwapNode(tempStart, biggest);
	}
}
void LLInsertionSort(LINK* x){
	//sorted left to right, smallest to biggest to contrast the SelectionSort	
	LINK* tempEnd = x;
	LINK* trav = x;

	int net = 0;

	for(tempEnd = x; *tempEnd != NULL;){
		net = 0;
		for(trav = x; *trav != *tempEnd; trav = &(*trav)->next){
			if((*trav)->data > (*tempEnd)->data){
				MoveToPos(tempEnd, trav);
				net = 1;
				break;
			}
		}
		if(net == 0){
			tempEnd = &(*tempEnd)->next;
		}
		/*
		because of the implementation of the function MoveToPos
		tempEnd gets itterated when passed through the function
		so we only explicitly itterate it if it doesnt pass through MoveToPos
		*/
	}	
}

// Misc -------------------------------------
void InsertSortedBTS(LINK* x, int n){
	//for lists assumed to be biggest to smallest
	LINK* trav;

	for(trav = x; *trav != NULL; trav = &(*trav)->next){
		if((*trav)->data < n){
			InsertHere(trav, n);
			break;
		}
	}
}
void InsertSortedSTB(LINK* x, int n){
	//for lists assumed to be smallest to biggest
	LINK* trav;

	for(trav = x; *trav != NULL; trav = &(*trav)->next){
		if((*trav)->data > n){
			InsertHere(trav, n);
			break;
		}
	}
}
void ReverseList(LINK* x){
	LINK a = *x;
	if(a == NULL){
		printf("a was NULL");
		goto ending;
	}
	LINK b = a->next;
	if(b == NULL){
		printf("b was NULL");
		goto ending;
	}
	//basically checks the variables in case of a segmentation fault
	
	LINK c = b->next;
	while(c != NULL){
		b->next = a;

		a = b;
		b = c;
		c = c->next;
	}
	b->next = a;
	(*x)->next = NULL;
	*x = b;

	ending:;
}

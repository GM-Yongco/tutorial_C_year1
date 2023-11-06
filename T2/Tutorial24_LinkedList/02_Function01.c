/*
Description     : Code that will impress u ;)
Author          : G.M. Yongco #BeSomeoneWhoCanStandByShinomiya
Date            : ur my date uwu
*/
#include <stdio.h>
#include <stdlib.h>


typedef struct node{
	int data;
	struct node* next;
}NODE, *LINK;

void AllocateNode(LINK* x){
	*x = (LINK)malloc(sizeof(NODE));
	(*x)->next = NULL;
}

int main(){
    printf("\n--------------------START--------------------\n");
    
    LINK head;
    
    AllocateNode(&head);
    head->data = 6;
    
	AllocateNode(&(head->next));
    head->next->data = 7;
    
    AllocateNode(&(head->next->next));
    head->next->next->data = 8;
    
    
    printf("%d %d %d", head->data, head->next->data, head->next->next->data);
    
    printf("\n---------------------END---------------------\n");
    return 0;
}

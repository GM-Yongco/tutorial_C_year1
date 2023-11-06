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

int main(){
    printf("\n--------------------START--------------------\n");
    
    LINK head = (LINK)malloc(sizeof(NODE));
    head->data = 5;
    
    head->next = (LINK)malloc(sizeof(NODE));
    head->next->data = 9;
    
    head->next->next = (LINK)malloc(sizeof(NODE));
    head->next->next->data = 13;
    
    printf("%d %d %d", head->data, head->next->data, head->next->next->data);
    
    printf("\n---------------------END---------------------\n");
    return 0;
}

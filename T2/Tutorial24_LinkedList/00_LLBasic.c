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
    
    NODE n1;
    LINK head = &n1;
    n1.data = 5;
    n1.next = NULL;
    
    NODE n2;
    n1.next = &n2;
	n2.data = 9;
    n2.next = NULL;
    
    NODE n3;
    n2.next = &n3;
	n3.data = 12;
    n3.next = NULL;
    
    printf("\n%d %d %d", n1.data, (n1.next)->data, ((n1.next)->next)->data );
    printf("\n%d %d %d", head->data, head->next->data, head->next->next->data);
    
    printf("\n---------------------END---------------------\n");
    return 0;
}

/*
Description     : Code that will impress u ;)
Author          : G.M. Yongco #BeSomeoneWhoCanStandByShinomiya
Date            : ur my date uwu
*/
// ------------------------------------------
#include <stdio.h>
#include <stdlib.h>

#include "03_BasicFunctionCompilation.h"

int main(){
    printf("\n--------------------START--------------------\n");
    LINK head = NULL;



    printf("\ntesting: InsertEnd, InsertHerez, InsertPos\n");
    InsertEnd(&head, 0);
    InsertHere(&head, 1);
    InsertHere(&head, 2);
    InsertHere(&head, 3);
    InsertHere(&head, 4);
    InsertEnd(&head, -12);
    InsertPos(&head, 69, 2);
    InsertPos(&head, 0, 420);
    LLDisplay(head);



    printf("\ntesting: DeleteAll, ReturnPTPos, DeleteNode, ReturnNodeNumber\n");
    DeleteAll(&head);
    InsertEnd(&head, 1);
    InsertEnd(&head, 2);
    InsertEnd(&head, 3);
    InsertEnd(&head, 4);
    InsertEnd(&head, -12);
    InsertEnd(&head, 420);
    InsertEnd(&head, 69);    
    printf("%d\n", (*ReturnPTPos(&head, 1))->data);
    printf("there are %d number of nodes in the list\n", ReturnNodeNumber(head));
    DeleteNode(ReturnPTPos(&head, 2));
    DeleteNode(ReturnPTPos(&head, ReturnNodeNumber(head) - 1));
        //basically removes the last node
    LLDisplay(head);



    printf("\ntesting: Swapings\n");
    SwapWNext(ReturnPTPos(&head, ReturnNodeNumber(head)-2));            //second to the last node is swapped with the last node
    LLDisplay(head);
    SwapNonSequential(ReturnPTPos(&head, 2), ReturnPTPos(&head, 4));    //node in position 2 and 4 get swapped
    LLDisplay(head);
    MoveToPos(&head, ReturnPTPos(&head, ReturnNodeNumber(head)));       //first node gets moved to the last node
    LLDisplay(head);
    SwapNode(&head, &head);
    LLDisplay(head);
    SwapNode(&head, ReturnPTPos(&head, ReturnNodeNumber(head)-1));      //head gets swapped with the last node
    LLDisplay(head);



    printf("\ntesting: Sorting\n");
    LLBubbleSort(&head);
    LLDisplay(head);
    LLSelectionSort(&head);
    LLDisplay(head);
    LLInsertionSort(&head);
    LLDisplay(head);



    printf("\ntesting: InsertSorted\n");
    InsertSortedSTB(&head, 8);
    LLDisplay(head);
    LLSelectionSort(&head);
    InsertSortedBTS(&head, 3);
    LLDisplay(head);



    printf("\ntesting: ReverseList\n");
    ReverseList(&head);
    LLDisplay(head);

    printf("\n---------------------END---------------------\n");
    return 0;
}
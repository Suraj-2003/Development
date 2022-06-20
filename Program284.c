#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

struct node
{
    int Data;
     struct node *Next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE Head, int no)
{
    PNODE newn = NULL;

    newn  = (PNODE)malloc(sizeof(NODE));

    newn -> Next= NULL;
    newn -> Data = no;

    if(*Head == NULL)
    {
        *Head = newn;
    } 
    else
    {
        newn -> Next = *Head;
        *Head = newn;
    }
}

void Display(PNODE Head)
{
    printf("Data from Linked List\n");

    while(Head!=NULL)
    {
        printf("[%d]->",Head->Data);
        Head = Head->Next;
    }
    printf("\n");
}

BOOL SearchFirstOcc(PNODE Head, int no)
{
    int iNo = 0;
    int iCnt = 0;

    for(iCnt = 1; iCnt<=7; iCnt++)
    {
        iNo = Head -> Data;
        
        if(iNo == no)
        {
            break;
        } 
        
        Head = Head -> Next;
    } 
    return iCnt;

}

int main()
{
    PNODE First = NULL;
    BOOL iRet = 0;

    InsertFirst(&First,70);
    InsertFirst(&First,30);
    InsertFirst(&First,50);
    InsertFirst(&First,40);
    InsertFirst(&First,30);
    InsertFirst(&First,20);
    InsertFirst(&First,10);

    Display(First);

    iRet = SearchFirstOcc(First,30);

    printf("Given numbers first occurance is: %d",iRet);
    
    return 0;
}
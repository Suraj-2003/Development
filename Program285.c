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

int Addition(PNODE Head)
{
    
    int iCnt = 0;
    int iSum = 0;
    int iNo = 0;

    for(iCnt = 1; iCnt<=4; iCnt++)
    {
        iNo = Head -> Data;

        iSum = iSum + iNo; 

        Head = Head -> Next;
    } 
    return iSum;

}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First,40);
    InsertFirst(&First,30);
    InsertFirst(&First,20);
    InsertFirst(&First,10);

    Display(First);
    
    iRet = Addition(First);

    printf("Addition is: %d",iRet);
    
    return 0;
}
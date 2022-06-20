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

int Maximum(PNODE Head)
{
    int iNo = 0;
    int iCnt = 0;
    int iMax = Head->Data;

    for(iCnt = 1; iCnt<=4; iCnt++)
    {
        iNo = Head -> Data;

        if(iMax<iNo)
        {
            iMax = iNo;
        }

        Head = Head -> Next;
    } 
    return iMax;

}

int main()
{
    PNODE First = NULL;
    BOOL iRet = 0;

    InsertFirst(&First,400);
    InsertFirst(&First,-320);
    InsertFirst(&First,230);
    InsertFirst(&First,-110);
   
    Display(First);

    iRet = Maximum(First);

    printf("Largest element from Linked List is: %d",iRet);
    
    return 0;
}
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

int Minimum(PNODE Head, int no)
{
    int iNo = 0;
    int iCnt = 0;
    int iMin = Head -> Data;

    for(iCnt = 1; iCnt<=4; iCnt++)
    {
        iNo = Head -> Data;
        Head = Head -> Next;

        if(iMin>iNo)
        {
            iMin = iNo;
        }
    } 
    return iMin;

}

int main()
{
    PNODE First = NULL;
    BOOL iRet = 0;

    InsertFirst(&First,640);
    InsertFirst(&First,240);
    InsertFirst(&First,20);
    InsertFirst(&First,-230);
    InsertFirst(&First,110);
   
    Display(First);

    iRet = Minimum(First,30);

    printf("Smallest element from Linked List is: %d",iRet);
    
    return 0;
}
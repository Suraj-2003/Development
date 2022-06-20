#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Search(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;
    bool bFlag = false;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            bFlag = true;
            break;
        }
    }
    return bFlag;
}

int main()
{
    int iCnt = 0, iSize = 0, iValue = 0;
    int *ptr = NULL;
    bool bRet;

    printf("Enter number of elements\n");
    scanf("%d",&iSize);

    ptr = (int*)malloc(iSize * sizeof(int));
     
    printf("Entered elements is: %d\n",iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element: %d\n",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }

    printf("Enter element to search\n");
    scanf("%d",&iValue);

    bRet = Search(ptr, iSize, iValue);

    if(bRet == true)
    {
        printf("Element is there in Array\n");
    } 
    else
    {
        printf("Element is not there in Array\n");
    }
    
    free(ptr);

    return 0;
}
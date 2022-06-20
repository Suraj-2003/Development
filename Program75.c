#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int SearchLastOccurance(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;

    for(iCnt = iLength-1; iCnt >= 0; iCnt--)
    {
        if(Arr[iCnt] == iNo)
        {
            break;
        }
    }
    return iCnt;
}

int main()
{
    int iCnt = 0, iSize = 0, iValue = 0;
    int *ptr = NULL;
    int iRet = 0;

    printf("Enter number of elements\n");
    scanf("%d",&iSize);

    ptr = (int*)malloc(iSize * sizeof(int));

    if(ptr == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Entered element is: %d\n",iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element: %d\n",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }

    printf("Enter element to search\n");
    scanf("%d",&iValue);

    iRet = SearchLastOccurance(ptr, iSize, iValue);

    if(iRet == -1)
    {
        printf("There is no such element");
    }
    else
    {
        printf("Element Last occured at: %d",iRet);
    }
}
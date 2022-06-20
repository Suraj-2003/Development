#include<stdio.h>
#include<stdlib.h>

int SearchFirstOccurance(int Arr[], int iLength, int iNo)
{
    int iCnt = 0; 

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            break;
        }
    }
    if(iCnt == iLength)
    {
        return -1;
    }
    else
    {
        return iCnt;
    }
}
int main()
{
    int iCnt = 0, iRet = 0, iSize = 0, iValue = 0;
    int *ptr = NULL;

    printf("Enter number of elements\n");
    scanf("%d", &iSize);

    ptr = (int*)malloc(iSize * sizeof(int));

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element: %d\n",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }

    printf("Enter the element to search\n");
    scanf("%d",&iValue);

    iRet = SearchFirstOccurance(ptr, iSize, iValue);

    if(iRet == -1)
    {
        printf("There is no such element in Array");
    }
    else
    {
        printf("Element first occured at: %d\n",iRet);
    }

    return 0;
}
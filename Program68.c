#include<stdio.h>
#include<stdlib.h>

int SummationNumber(int Arr[], int iLength)
{
    int iCnt = 0; 
    int iSum= 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
       if((Arr[iCnt] % 2) == 0)
       {
          iSum = iSum + Arr[iCnt];
       }
    }
    return iSum;
}

int main()
{
    int iCnt = 0, iSize = 0;
    int *iPtr = NULL;
    int iRet = 0;
    
    printf("Enter the number of elements:\n");
    scanf("%d",&iSize);
    
    iPtr = (int*)malloc(sizeof(int) * iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element:%d\n",iCnt+1);
        scanf("%d",&iPtr[iCnt]); 
    }

    iRet = SummationNumber(iPtr, iSize);
    printf("Summation is: %d\n",iRet);
    free(iPtr);
    
    return 0;
}
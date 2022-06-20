#include<stdio.h>
#include<stdlib.h>

// Positive & Negative

int Maximum(int Arr[], int iLength)
{
    int iCnt = 0; 
    int iMax= Arr[iCnt];

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(iMax < Arr[iCnt])
        {
            iMax = Arr[iCnt];
        }
    }
    return iMax;
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

    iRet = Maximum(iPtr, iSize);
    printf("Maximum number is: %d\n",iRet);
    free(iPtr);
    
    return 0;
}
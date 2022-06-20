#include<stdio.h>
#include<stdlib.h>

// Positive & Negative

int Minimum(int Arr[], int iLength)
{
    int iCnt = 0; 
    int iMin= Arr[iCnt];

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(iMin > Arr[iCnt])
        {
            iMin = Arr[iCnt];
        }
    }
    return iMin;
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

    iRet = Minimum(iPtr, iSize);
    printf("Minimum number is: %d\n",iRet);
    free(iPtr);
    
    return 0;
}
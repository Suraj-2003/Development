#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iLength,int iNo)
{
    int iCnt = 0; 
    int iFrequency = 0;
    
    printf("Even Elements are : \n");

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
       if(iNo == Arr[iCnt])
       {
           iFrequency++;
       }
    }
    return iFrequency;
}

int main()
{
    int iCnt = 0, iSize = 0;
    int *iPtr = NULL;
    int iRet = 0,iNo = 0;
    
    printf("Enter the number of elements:\n");
    scanf("%d",&iSize);
    
    iPtr = (int*)malloc(sizeof(int) * iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element:%d\n",iCnt+1);
        scanf("%d",&iPtr[iCnt]); 
    }
    
    printf("Enter the element to calculate the frequency\n");
    scanf("%d",&iNo);

    iRet = Frequency(iPtr, iSize,iNo);
    printf("Frequency is: %d\n",iRet);
    free(iPtr);
    
    return 0;
}
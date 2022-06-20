#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[], int iLength)
{
    int iCnt = 0;
    
    printf("Elements of array are : \n");

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        printf("%d\n",Arr[iCnt]);
    }
}

int main()
{
    int iCnt = 0, iSize = 0;
    int *iPtr = NULL;
    
    printf("Enter the number of elements:\n");
    scanf("%d",&iSize);
    
    iPtr = (int*)malloc(sizeof(int) * iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element:%d\n",iCnt+1);
        scanf("%d",&iPtr[iCnt]); 
    }

    Display(iPtr, iSize);

    free(iPtr);
    
    return 0;
}
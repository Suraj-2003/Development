#include<stdio.h>
#include<stdlib.h>

void Digits(int Arr[], int iLength)
{
    int iCnt = 0;
    int iDigit = 0;
    int temp = 0;
    

    for(iCnt = 0; iCnt<iLength; iCnt++)
    {
        int iCount = 0;
        temp = Arr[iCnt];
        
        while(Arr[iCnt] != 0)
        {
         iDigit = Arr[iCnt] % 10;

         iCount++;
         
         Arr[iCnt] = Arr[iCnt] / 10;
        }

        if(iCount == 3)
        {
            printf("%d\t",temp);
        }
   
       } 
    
}
int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
    int *p = NULL;

    printf("Enter number of elements :");
    scanf("%d",&iSize);

    p = (int*)malloc(sizeof(int) * iSize);

    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d Elements\n",iSize);

    for(iCnt = 0; iCnt<iSize; iCnt++)
    {
       printf("Enter element: %d\n",iCnt + 1);
       scanf("%d",&p[iCnt]);
    }

    Digits(p, iSize);

    free(p);

    return 0;
}
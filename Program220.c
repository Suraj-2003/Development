#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkZero(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;

    while(iNo > 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 0)
        {
            iCnt++;
        }
        iNo = iNo / 10;
    }
    if(iCnt == 0)
    {
        return FALSE;
    }
    else
    {
        return TRUE;
    }
        
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number");
    scanf("%d",&iValue);

    bRet = ChkZero(iValue);

    if(bRet == FALSE)
    {
        printf("There is no Zero");
    }
    else
    {
        printf("it contains Zero");
    }
    return 0;
}

// Time Complexity :  O(N)

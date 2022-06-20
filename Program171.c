#include<stdio.h>

int OnBit(int iNo)
{
   int iMask = 0X00000008;
   int iResult = 0;

   iResult = iMask | iNo;
   
    return iResult;
}

int main()
{
    int iValue = 0;
    int iRet;

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet= OnBit(iValue);

    printf("Updated number is: %d\n",iRet);

    return 0;
}
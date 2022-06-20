#include<stdio.h>
#include<stdbool.h>

bool CheckBit(int iNo)
{
   int iMask = 0X00100000;
   int iResult = 0;

   iResult = iMask & iNo;

   if(iResult == 0)
   {
       return false;
   }
   else
   {
       return true;
   }
}

int main()
{
    int iValue = 0;
    bool bRet;

    printf("Enter number\n");
    scanf("%d",&iValue);

    bRet= CheckBit(iValue);

    if(bRet == true)
    {
        printf("Bit is on");
    }
    else
    {
        printf("Bit is off");
    }

    return 0;
}
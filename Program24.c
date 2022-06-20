#include<stdio.h>
#include<stdbool.h>

bool ChkEven(int iNo)
{
    if((iNo % 2) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    bool iRet;

    printf("Enter number\n");
    scanf("%d",&iValue);

     iRet = ChkEven(iValue);

     if(iRet == true)
     {
         printf("%d is even number",iValue);
     }
     else
     {
         printf("%d is odd number",iValue);
     }

    return 0;
}
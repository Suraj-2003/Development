#include<stdio.h>
#include<stdbool.h>

int Check(int iNo)
{
    if(
        ((iNo % 3) == 0) &&
        ((iNo % 5) == 0)
      )
    {
       return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int iValue = 0;
    int iRet;

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet = Check(iValue);
    
    if(iRet == 1)
    {
        printf("%d is a divisible by 3 & 5\n",iValue);
    }
    else
    {
        printf("%d is not divisible by 3 & 5\n",iValue);
    }

    return 0;
}
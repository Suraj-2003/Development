#include<stdio.h>
#include<stdbool.h>

bool Check(int iNo)
{
    if(
        ((iNo % 3) == 0) &&
        ((iNo % 5) == 0)
      )
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

    iRet = Check(iValue);
    
    if(iRet == true)
    {
        printf("%d is a divisible by 3 & 5\n",iValue);
    }
    else
    {
        printf("%d is not divisible by 3 & 5\n",iValue);
    }

    return 0;
}
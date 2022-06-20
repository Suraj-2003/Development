#include<stdio.h>

int Power(int iNo1, int iNo2)
{
    register int iCnt = 0;
    int iMult = 1;

    for(iCnt = 1; iCnt <= iNo2; iCnt++)
    {
        iMult = iMult * iNo1;
    }
    return iMult;
}

int main()
{
    auto int iValue1 = 0, iValue2 = 0;
    auto int iRet = 0;

    printf("Enter Base\n");
    scanf("%d",&iValue1);

    printf("Enter Power\n");
    scanf("%d",&iValue2);

    iRet = Power(iValue1, iValue2);

    printf("Result is: %d\n",iRet);

    return 0;
}
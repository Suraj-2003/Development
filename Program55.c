#include<stdio.h>

typedef unsigned long int ULONG; //*

ULONG Power(int iNo1, int iNo2)
{
    register int iCnt = 0;
    ULONG lMult = 1;   //*

    for(iCnt = 1; iCnt <= iNo2; iCnt++)
    {
        lMult = lMult * iNo1; //*
    }
    return lMult;  //*
}

int main()
{
    auto int iValue1 = 0, iValue2 = 0;
    auto  ULONG lRet = 0;   //*

    printf("Enter Base\n");
    scanf("%d",&iValue1);

    printf("Enter Power\n");
    scanf("%d",&iValue2);

    lRet = Power(iValue1, iValue2); //*
    printf("Result is: %ld\n",lRet); //*
    
    return 0;
}
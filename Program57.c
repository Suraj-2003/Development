#include<stdio.h>
#include<stdbool.h>

 int Power(int iNo1, int iNo2)
 {
     int iCnt = 0;
     int iMul = 1;

     for(iCnt = 1; iCnt <= iNo2; iCnt++)
     {
        iMul = iMul * iNo1;
     }
     return iMul;
 }

bool CheckArmstrong(int iNo)
{
    int iDigit = 0, iDigCnt = 0, iTemp = 0, iSum = 0;

    iTemp = iNo;

    while(iNo != 0)
    {
        iDigCnt++;
        iNo = iNo / 10;
    }

    iNo = iTemp;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + Power(iDigit, iDigCnt);
        iNo = iNo / 10;
    }

    if(iSum == iTemp)
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
    bool bRet;

    printf("Enter number\n");
    scanf("%d",&iValue);
    
    bRet = CheckArmstrong(iValue);
    
    if(bRet == true)
    {
        printf("%d is a Armstrong number",iValue);
    }
    else
    {
        printf("%d is not a Armstrong number",iValue);
    }
    return 0;
}
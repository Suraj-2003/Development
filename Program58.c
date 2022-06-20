#include<stdio.h>
#include<stdbool.h>

bool CheckArmstrong(int iNo)
{
    int iCnt = 0, iDigit = 0, iDigCnt = 0;
    int iSum = 0, iTemp = 0, iMult = 0;

    iTemp = iNo;

    while(iNo != 0)
    {
        iDigCnt++;
        iNo = iNo / 10;
    }

    iNo = iTemp;
    
    while(iNo != 0)
    {
        iMult = 1;
        iDigit = iNo % 10;
        
        for(iCnt = 1; iCnt <= iDigCnt; iCnt++)
        {
            iMult = iMult * iDigit;
        }

        iSum = iSum + iMult;
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
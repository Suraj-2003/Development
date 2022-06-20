#include<stdio.h>
#include<stdbool.h>

////////////////////////////////////////////////////////////////
//
// Function Name:        
// Description:          Display digits in reverse order
// Input:                Integer
// Output:               Integer
// Author Name:          Sursj Rajkumar More
//
/////////////////////////////////////////////////////////////////

bool CheckPallindrome(int iNo)
{
   int iDigit = 0;
   int iRev = 0;
   int iTemp = 0;

   iTemp = iNo;

   while(iNo != 0)
   {
       iDigit = iNo % 10;
       iRev = iRev * 10 + iDigit;
       iNo = iNo / 10;
   }
   if(iRev == iTemp)
   {
       return true;
   }
   else
   {
       return false;
   }
}

//////////////////////////////////////////////////////////////////////////////
// Write a program to display digits in reverse order
/////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    bool bRet;

    printf("Enter number\n");
    scanf("%d",&iValue);

    bRet = CheckPallindrome(iValue);
    
    if(bRet == true)
    {
        printf("%d is a pallindrome number",iValue);
    }
    else
    {
        printf("%d is not a pallindrome number",iValue);
    }
    
    return 0;
}

////////////////////
//
// Input:    123
// Output:   321
//
///////////////////
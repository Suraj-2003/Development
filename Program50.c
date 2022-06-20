#include<stdio.h>

////////////////////////////////////////////////////////////////
//
// Function Name:        Reverse
// Description:          Display digits in reverse order
// Input:                Integer
// Output:               Integer
// Author Name:          Sursj Rajkumar More
//
/////////////////////////////////////////////////////////////////

int Reverse(int iNo)
{
   int iDigit = 0;
   int iRev = 0;

   while(iNo != 0)
   {
       iDigit = iNo % 10;
       iRev = iRev * 10 + iDigit;
       iNo = iNo / 10;
   }
   return iRev;
}

//////////////////////////////////////////////////////////////////////////////
// Write a program to display digits in reverse order
/////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet = Reverse(iValue);
    
    printf("%d",iRet);
    
    return 0;
}

////////////////////
//
// Input:    123
// Output:   321
//
///////////////////
#include<iostream>
using namespace std;

// Time Complexity : O(N/2)

void DisplayFactors(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= (iNo/2); iCnt++) //*
    {
      if((iNo % iCnt) == 0)
      {
         cout<<iCnt<<endl;
      }
    }
}

int  main()
{
    int iValue = 0;
    
    cout<<"Enter number"<<endl;
    cin>>iValue;

    DisplayFactors(iValue);

    return 0;
}
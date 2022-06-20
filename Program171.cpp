#include<iostream>
using namespace std;

class Bitwise
{
  public:
  int OnBit(int iNo)  // 4
  {
      int iMask = 0X00000008; 
      int iResult = 0;

      iResult = iNo | iMask;
      
      return iResult;
  }
  
};

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter number"<<endl;
    cin>>iValue;

    Bitwise bobj;
    iRet = bobj.OnBit(iValue);
    cout<<"Updated number is :"<<iRet;


    return 0;
}
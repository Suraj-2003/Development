#include<iostream>
using namespace std;

class Bitwise
{
  public:
  bool CheckBit(int iNo)
  {
      int iMask = 4; 
      int iResult = 0;

      iResult = iNo & iMask;

      if(iResult == 0)
      {
          return false;
      }
      else
      {
          return true;
      }
  }
  
};

int main()
{
    int iValue = 0;
    bool bRet;

    cout<<"Enter number"<<endl;
    cin>>iValue;

    Bitwise bobj;
    bRet = bobj.CheckBit(iValue);

    if(bRet == true)
    {
        cout<<"Bit is on";
    }
    else
    {
        cout<<"Bit is off";
    }

    return 0;
}
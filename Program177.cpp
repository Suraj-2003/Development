#include<iostream>
using namespace std;

class Bitwise
{
     public:
     int ToggleBit(int iNo, int iPos)
     {
         int iMask = 0X00000001;
         int iResult = 0;
         
        if((iPos <=0) || (iPos > 32))
        {
            cout<<"Invalid position\n";
            return 0;
        }

         iMask = iMask << (iPos-1);

         iResult = iNo ^ iMask;
         return iResult;
     }
};

int main()
{
    int value = 0;
    int pos = 0;

    cout<<"Enter number"<<endl;
    cin>>value;

    cout<<"Enter position"<<endl;
    cin>>pos;

    Bitwise bobj;
    int iRet = bobj.ToggleBit(value, pos);
    cout<<"Updated number is: "<<iRet;

    return 0;
}
#include<iostream>
using namespace std;

class Digits
{
     private:
        int iNo;

     public:
        void Accept()
        {
            cout<<"Enter number"<<endl;
            cin>>this->iNo;
        }
        void Display()
        {
            cout<<"Entered value is: "<<this->iNo<<endl;
        }
        int CountDigits()
        {
            int iDigit = 0;
            int iCount = 0;
            
            if(iNo < 0)
            {
                iNo = -iNo;
            }
            
            while(iNo != 0)
            {
               iDigit = iNo % 10;
               iCount++;
               iNo = iNo / 10;
            }
            return iCount;
        }
};

int main()
{
    int iRet = 0;
    Digits dobj;

    dobj.Accept();
    dobj.Display();

    iRet = dobj.CountDigits();
    cout<<"Number of digits are: "<<iRet<<endl;
    
    return 0;
}
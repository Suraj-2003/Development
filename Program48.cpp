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
        int SumDigits()
        {
            int iDigit = 0;
            int iSum = 0;
            
            if(iNo < 0)
            {
                iNo = -iNo;
            }
            
            while(iNo != 0)
            {
               iDigit = iNo % 10;
               iSum = iSum + iDigit;
               iNo = iNo / 10;
            }
            return iSum;
        }
};

int main()
{
    int iRet = 0;
    Digits dobj;

    dobj.Accept();
    dobj.Display();

    iRet = dobj.SumDigits();
    cout<<"Summation of digits are: "<<iRet<<endl;
    
    return 0;
}
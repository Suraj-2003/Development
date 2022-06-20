#include<iostream>
using namespace std;

class Number
{
    private:
       int iNo;
    
    public:
       Number(int iValue)
       {
           this->iNo = iValue;
       }

       void Display()
       {
           int iCnt = 0;
           
           if(iNo < 0)  // Filter
           {
               cout<<"please enter positive number"<<endl;
               return;
           }

           for(iCnt = 1; iCnt<=iNo; iCnt++)
           {
               cout<<"Hello"<<endl;
           }
       }

};

int main()
{
    int iValue = 0;

    cout<<"Enter number"<<endl;
    cin>>iValue;

    Number nobj(iValue);

    nobj.Display();

    return 0;
    
}
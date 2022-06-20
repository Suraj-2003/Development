#include<iostream>
using namespace std;

class Number
{
    private:
      int iNo;
    
    public:
       void Accept()
       {
         cout<<"Enter Number"<<endl;
         cin>>this->iNo;
       }

       void Display()
       {
           cout<<"Value is:"<<this->iNo<<endl;
       }

       bool ChkEven()
       {
           if((iNo % 2) == 0)
           {
               return true;
           }
           else
           {
               return false;
           }
       }
};
int main()
{
    int iRet = 0;
    Number nobj;

    nobj.Accept();
    nobj.Display();

    iRet = nobj.ChkEven();

    if(iRet == true)
    {
        cout<<"Even number"<<endl;
    }
    else
    {
        cout<<"odd number"<<endl;
    }
    
    return 0;
}
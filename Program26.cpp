#include<iostream>
using namespace std;

class Number
{
    public:
       int iNo;
    
    public:
       void Accept()
       {
          cout<<"Enter number"<<endl;
          cin>>this->iNo;
       }

       void Display()
       {
           cout<<"Value is: "<<this->iNo<<endl;
       }

       int Check()
       {
           if(
               ((iNo % 3) == 0) &&
               ((iNo % 5) == 0)
             )
           {
               return 1;
           }
           else
           {
               return 0;
           }
       }
};

int main()
{
    int iRet;

    Number nobj;

    nobj.Accept();
    nobj.Display();

    iRet = nobj.Check();
    
    if(iRet == 1)
    {
       cout<<"Divisible by 3 & 5";
    }
    else
    {
        cout<<"Not Divisible by 3 & 5";
    }
    
    return 0;
}
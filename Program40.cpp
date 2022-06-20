#include<iostream>
using namespace std;

class Factors
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
           cout<<"Entered valus is:"<<this->iNo<<endl;
       }
       int CountFactor()
       {
           int iCnt = 0;
           int iFactCnt= 0;

           for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
           {
               if((iNo % iCnt) == 0)
               {
                   iFactCnt++;
               }
           }
           return iFactCnt;
       }
};
int main()
{
    int iRet = 0;

    Factors fobj;

    fobj.Accept();
    fobj.Display();
   
    iRet = fobj.CountFactor();
    cout<<"Number of factors is: "<<iRet;

    return 0;
}
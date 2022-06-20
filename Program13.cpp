#include<iostream>
using namespace std;

class Number
{
   public:
      void Display()
      {
         int iCnt = 0;

         for(iCnt = 1; iCnt<=5; iCnt++)
         {
            cout<<"Hello"<<endl;
         }
      }
};

int main()
{
    Number nobj;

    nobj.Display();

    return 0;
}
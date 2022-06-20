#include<iostream>
using namespace std;

class Number
{
    private:
      int iNo;

    public:
      void Accept()
      {
          cout<<"Enter number"<<endl;
          cin>>this->iNo;
      }
      void DisplayF()
      {
          int iCnt = 0;
          cout<<"Forward Display"<<endl;
          for(iCnt = 1; iCnt <= iNo; iCnt++)
          {
              cout<<iCnt<<"\t";
          }
      }
      void DisplayB()
      {
          int iCnt = 0;
           cout<<"Backward Display"<<endl;

          for(iCnt = iNo; iCnt >= 1; iCnt--)
          {
              cout<<iCnt<<"\t";
          }
      }
};

int main()
{
    Number nobj;

    nobj.Accept();
    nobj.DisplayF();
    nobj.DisplayB();

    return 0;
}
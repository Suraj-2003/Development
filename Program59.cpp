#include<iostream>
using namespace std;

class Nnumbers
{
    private:
        int Arr[5];
    public:
       void Accept()
       {
           int iCnt = 0;
           cout<<"Enter elements:"<<endl;
           for(iCnt = 0; iCnt < 5; iCnt++)
           {
               cin>>Arr[iCnt];
           }
       }
       void Display()
       {
           int iCnt = 0;
           cout<<"Elements of array are:"<<endl;
           for(iCnt = 0; iCnt < 5; iCnt++)
           {
               cout<<Arr[iCnt]<<endl;
           }
       }
};

int main()
{
    Nnumbers nobj;

    nobj.Accept();
    nobj.Display();
    
    return 0;
}
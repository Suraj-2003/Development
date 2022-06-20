#include<iostream>
using namespace std;

class Number
{
    private:
        int iNo;        

    public:
        
        void Accept()       
        {
            cout<<"Enter the value : "<<endl;
            cin>>this->iNo;
        }

        void Display()      
        {
            cout<<"Value is : "<<this->iNo<<endl;
        }

        void DisplayNum()
        {
            int iCnt = 0;

            if(iNo < 0)
            {
                iNo = -iNo;
            }

            iCnt = 1;
             
             while(iCnt <= iNo)
             {
                 cout<<iCnt<<endl;
                 iCnt++;
             }
        }
};

int main()
{
    Number nobj;

    nobj.Accept();
    nobj.Display();

    nobj.DisplayNum();

    return 0;
}
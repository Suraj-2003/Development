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

        int Summation()
        {
             int iCnt = 0;
             int iSum = 0;

            if(iNo < 0)
            {
                iNo = -iNo;
            }

            for(iCnt = 1; iCnt <= iNo; iCnt++)
            {
                iSum = iSum + iCnt;
            }
            return iSum;
        }
};

int main()
{
    int iRet = 0;
    Number nobj;

    nobj.Accept();
    nobj.Display();

    iRet = nobj.Summation();
    cout<<"Summation is: "<<iRet<<endl;

    return 0;
}
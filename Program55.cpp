#include<iostream>
using namespace std;

typedef unsigned long int ULONG; //*

class Digits
{
    private:
        int iNo1;
        int iNo2;
    
    public:
        void Accept()
        {
            cout<<"Enter Base"<<endl;
            cin>>this->iNo1;

            cout<<"Enter Power"<<endl;
            cin>>this->iNo2;
        }
        void Display()
        {
            cout<<"Entered first value is: "<<this->iNo1<<endl;
            cout<<"Entered second value is: "<<this->iNo2<<endl;
        }
        ULONG Power() //*
        {
            int iCnt = 0;
            ULONG lMult = 1; //*

            for(iCnt = 1; iCnt <= iNo2; iCnt++)
            {
                lMult = lMult * iNo1;
            }
            return lMult;
        }
};

int main()
{
    ULONG lRet = 0;  //*

    Digits dobj;

    dobj.Accept();
    dobj.Display();
    lRet = dobj.Power();

    cout<<"Result is: "<<lRet;
 
    return 0;
}
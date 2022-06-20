#include<iostream>
using namespace std;

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
        int Power()
        {
            int iCnt = 0;
            int iMult = 1;

            for(iCnt = 1; iCnt <= iNo2; iCnt++)
            {
                iMult = iMult * iNo1;
            }
            return iMult;
        }
};
int main()
{
    int iRet = 0;

    Digits dobj;

    dobj.Accept();
    dobj.Display();
    iRet = dobj.Power();

    cout<<"Result is: "<<iRet;
 
    return 0;
}
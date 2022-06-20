#include<iostream>
using namespace std;

class Armstrong
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
            cout<<"Entered value is: "<<this->iNo<<endl;
        }
        bool CheckArmstrong()
        {
            int iDigit = 0, iDigCnt = 0, iTemp = 0;
            int iCnt = 0, iMult = 0, iSum = 0;

            iTemp = iNo;

            while(iNo != 0)
            {
                iDigCnt++;
                iNo = iNo / 10;
            }

            iNo = iTemp;

            while(iNo != 0)
            {
                iMult = 1; 
                iDigit = iNo % 10;

                for(iCnt = 1; iCnt <= iDigCnt; iCnt++)
                {
                    iMult = iMult * iDigit;
                }

                iSum = iSum + iMult;
                iNo = iNo / 10;
            }

            if(iSum == iTemp)
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
    bool bRet;

    Armstrong aobj;

    aobj.Accept();
    aobj.Display();

    bRet = aobj.CheckArmstrong();

    if(bRet == true)
    {
        cout<<"This is Armstrong number"<<endl;
    }
    else
    {
        cout<<"This is not Armstrong number"<<endl;
    }

    return 0;
}
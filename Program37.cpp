// Template for probplems on Numbers

#include<iostream>
using namespace std;

class Number
{
    private:
        int iNo;
                // Charactristics
    public:
        Number(int iValue)
        {
            this->iNo = iValue;
        }

        void Display()      // Getter
        {
            cout<<"Value is : "<<this->iNo<<endl;
        }
    
        bool CheckPerfect()
        {
           int iCnt = 0;
           int iSum = 0;

           for(iCnt = (iNo/2); ((iCnt >= 1) && (iSum <= iNo)); iCnt--) //*
           {
               if((iNo % iCnt) == 0)
               {
                 iSum = iSum + iCnt;
               }
           }

           if(iSum == iNo)
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
    int iValue = 0;
    bool bRet;

    cout<<"Enter number"<<endl;
    cin>>iValue;

    Number nobj(iValue);

    bRet = nobj.CheckPerfect();
    
    if(bRet == true)
    {
        cout<<"is a perfect number"<<endl;
    }
    else
    {
        cout<<"is not a perfect number"<<endl;
    }

    return 0;
}
#include<iostream>
using namespace std;

class Factor
{
    private:
        int iNo;
    
    public:
        Factor(int iValue)
        {
            this->iNo = iValue;
        }
        bool CheckPrime()
        {
            int iCnt = 0;
            
            for(iCnt = 2; iCnt <= (iNo/2); iCnt++)
            {
                if((iNo % iCnt) == 0)
                {
                    break;
                }
            }

            if(iCnt == (iNo/2)+1)
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

    Factor fobj(iValue);
    
    bRet = fobj.CheckPrime();

    if(bRet == true)
    {
        cout<<iValue;
        cout<<" is a prime number";
    }
    else
    {
        cout<<iValue;
        cout<<" is not a prime number";
    }
    return 0;
}
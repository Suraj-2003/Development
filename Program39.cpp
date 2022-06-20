#include<iostream>
using namespace std;

class Number
{
    private:
        int iNo;
    
    public:
      Number(int iValue)
      {
          this->iNo = iValue;
      }
    public:
        bool CheckPrime()
        {
            int iCnt = 0;
            bool bFlag = true;

            for(iCnt = 2; iCnt <= iNo/2; iCnt++)
            {
                if((iNo % 2) == 0)
                {
                    bFlag = false;
                    break;
                }
            }
            return bFlag;
        }

};

int main()
{
    int iValue = 0;
    bool bRet;

    cout<<"Enter number"<<endl;
    cin>>iValue;
    
    Number nobj(iValue);

    bRet = nobj.CheckPrime();
    
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
#include<iostream>
using namespace std;

class Factors
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
        bool CheckPrime()
        {
            int iCnt = 0;

            for(iCnt = 2; iCnt <= (iNo/2); iCnt++)
            {
                if((iNo % iCnt) == 0)
                {
                    return false;
                }
            }
            return true;
        }
};

int main()
{
    bool bRet;
    Factors fobj;

    fobj.Accept();
    fobj.Display();

    bRet = fobj.CheckPrime();

    if(bRet == true)
    {
        cout<<"Prime number"<<endl;
    }
    else
    {
        cout<<"Not prime numer"<<endl;
    }
    
    return 0;
}
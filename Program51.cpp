#include<iostream>
using namespace std;

class Digits
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
            cout<<"Your Entered value is: "<<this->iNo<<endl; 
        }
        bool CheckPallindrome()
        {
            int iDigit = 0;
            int iRev = 0;
            int iTemp = 0;

            iTemp = iNo;

            while(iNo != 0)
            {
                iDigit = iNo % 10;
                iRev = iRev * 10 + iDigit;
                iNo = iNo / 10;
            }
            
            if(iRev == iTemp)
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
    Digits dobj;

    dobj.Accept();
    dobj.Display();
    
    bRet = dobj.CheckPallindrome();
    
    if(bRet == true)
    {
        cout<<"Pallindrome number"<<endl;
    }
    else
    {
        cout<<"Not Pallindrome number"<<endl;
    }
}
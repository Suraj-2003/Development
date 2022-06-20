#include<iostream>
using namespace std;

class Arithmatic
{
    private:
       int iValue1;
       int iValue2;
    
    public:
       Arithmatic(int iNum1, int iNum2)
       {
           iValue1 = iNum1;
           iValue2 = iNum2;
       }
       
       int Addition()
       {
           int iAns = 0;
           iAns = iValue1 + iValue2;
           return iAns;
       }
};

int main()
{
    int iNo1 = 0;
    int iNo2 = 0;
    int iNo3 = 0;

    cout<<"Enter first number"<<endl;
    cin>>iNo1;

    cout<<"Enter second number"<<endl;
    cin>>iNo2;
    
    Arithmatic aobj(iNo1, iNo2);

    iNo3 = aobj.Addition();

    cout<<"Addition is:"<<iNo3<<endl;
     
    return 0;
}
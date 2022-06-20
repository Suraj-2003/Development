#include<iostream>
using namespace std;

template <class T>
T Addition(T A, T B)
{
    T Ans;

    Ans = A + B;

    return Ans;
}

int main()
{
    int iValue1 = 11, iValue2 = 21;
    int iRet = Addition(iValue1, iValue2);
    cout<<"Addition is: "<<iRet<<endl;

    float fValue1 = 11.1, fValue2 = 21.1;
    float fRet = Addition(fValue1, fValue2);
    cout<<"Addition is: "<<fRet;

    return 0;
}
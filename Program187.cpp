#include<iostream>
using namespace std;

template <class T>
T Maximum(T Arr[], int Size)
{
    int i = 0;
    T Max = Arr[0];

    for(i = 0; i<Size; i++)
    {
        if(Max < Arr[i])
        {
            Max = Arr[i];
        }
    }
    return Max;
}

int main()
{
    int Ret;
    int Brr[] = {10,20,30,40,50};

    Ret = Maximum(Brr,5);
    cout<<"Maximum number is :"<<Ret<<endl;

    
    float Crr[] = {10.11,20.21,30.31,40.41,50.51};

    float fRet = Maximum(Crr,5);
    cout<<"Maximum number is :"<<fRet;

    return 0;
}
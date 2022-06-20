#include<iostream>
using namespace std;

template <class T>
T Minimum(T Arr[], int Size)
{
    int i = 0;
    T Min = Arr[0];

    for(i = 0; i<Size; i++)
    {
        if(Min > Arr[i])
        {
            Min = Arr[i];
        }
    }
    return Min;
}

int main()
{
    int Ret;
    int Brr[] = {10,20,30,40,50};

    Ret = Minimum(Brr,5);
    cout<<"Minimum number is :"<<Ret<<endl;

    
    float Crr[] = {10.11,20.21,30.31,40.41,50.51};

    float fRet = Minimum(Crr,5);
    cout<<"Minimum number is :"<<fRet;

    return 0;
}
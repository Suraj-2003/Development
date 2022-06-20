#include<iostream>
using namespace std;

template <class T>  // function header
T Maximum(T *Arr, int Size)
{
    int i = 0;
    T Max = Arr[i];

    for(i = 0; i < Size; i++)
    {
        if(Arr[i] > Max)
        {
            Max = Arr[i];
        }
    }
    return Max;
}

int main()
{
    int Arr[] = {10,20,30,40,50};
    float Brr[] = {10.11,20.11,30.11,40.11};

    int iRet = Maximum(Arr,5);
    cout<<"Maximum number is:"<<iRet<<endl;
    
    float fRet = Maximum(Brr,4);
    cout<<"Maximum number is:"<<fRet<<endl;
    
    return 0;
}
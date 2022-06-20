#include<iostream>
using namespace std;

int Max(int *Arr, int Size)
{
    int i = 0;
    int Max = Arr[i];

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
    
    int iRet = Max(Arr,5);
    cout<<"Maximum number is:"<<iRet<<endl;
    
    return 0;
}
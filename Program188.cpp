#include<iostream>
using namespace std;

int Maximum(int Arr[], int Size)
{
    int i = 0;
    int Max = Arr[0];

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
    
    return 0;
}
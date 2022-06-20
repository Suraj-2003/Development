#include<iostream>
using namespace std;
// function template
int Minimum(int Arr[], int Size)
{
    int i = 0;
    int Min = Arr[0];

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
    
    return 0;
}
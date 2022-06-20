#include<iostream>
using namespace std;

template <class T>
void Display(T *Arr, int Size)
{
    int i = 0;

    for(i = 0; i < Size; i++)
    {
        cout<<Arr[i]<<'\t';
    }
    cout<<endl;
}

int main()
{
    int Arr[] = {10,20,30,40,50};
    float Brr[] = {10.11,20.21,30.31,40.41};
    char Crr[] = {'A','B','C'};
    
    Display(Arr,5);
    Display(Brr,4);
    Display(Crr,3);

    return 0;
}
#include<iostream>
using namespace std;

void Display(int *Arr, int Size)
{
    int i = 0;

    for(i = 0; i < Size; i++)
    {
        cout<<Arr[i]<<endl;
    }
}
int main()
{
    int Arr[] = {10,20,30,40,50};

    Display(Arr,5);

    return 0;
}
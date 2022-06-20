#include<iostream>
using namespace std;

template <class T>  // template header
void SwapA(T *p, T *q)
{
    T temp;
    temp = *p;
    *p = *q;
    *q = temp;
} 

int main()
{
    int No1 = 11, No2 = 21;

    cout<<"Before swap data is: "<<No1<<" "<<No2<<endl;

    SwapA(&No1, &No2);

    cout<<"After swap data is: "<<No1<<" "<<No2<<endl; 

    return 0;
}
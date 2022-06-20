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
    
    float fNo1 = 11.0, fNo2 = 21.0;
    cout<<"Before swap data is: "<<fNo1<<" "<<fNo2<<endl;
    SwapA(&fNo1, &fNo2);
    cout<<"After swap data is: "<<fNo1<<" "<<fNo2<<endl; 

    
    char cNo1 = 'A', cNo2 = 'B';
    cout<<"Before swap data is: "<<cNo1<<" "<<cNo2<<endl;
    SwapA(&cNo1, &cNo2);
    cout<<"After swap data is: "<<cNo1<<" "<<cNo2<<endl; 

    return 0;
}
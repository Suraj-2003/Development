#include<iostream>
using namespace std;

template <class T>
class ArrayX
{
     public:
     T *Arr;
     int Size;

     ArrayX(int);
     ~ArrayX();
     void Accept();
     void Display();
     T Maximum();
};

template <class T>
ArrayX<T>::ArrayX(int iValue)
{
    Size = iValue;
    Arr = new T[Size];
}

template <class T>
ArrayX<T>::~ArrayX()
{
    delete []Arr;
}

template <class T>
void ArrayX<T>::Accept()
{
    cout<<"Enter the values"<<endl;

     for(int i = 0; i < Size; i++)
     {
        cin>>Arr[i];
     }
}

template <class T>     
void ArrayX<T>::Display()
{
    cout<<"values are"<<endl;

    for(int i = 0; i < Size; i++)
    {
        cout<<Arr[i]<<endl;
    }
}

template <class T>
T ArrayX<T>::Maximum()
{
    T Max = Arr[0];

    for(int i = 0; i < Size; i++)
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
    ArrayX <int>obj1(5);
    obj1.Accept();
    obj1.Display();
    int iRet = obj1.Maximum();
    cout<<"Maximum number is:"<<' '<<iRet<<endl;

    ArrayX <float>obj2(5);
    obj2.Accept();
    obj2.Display();
    float fRet = obj2.Maximum();
    cout<<"Maximum number is:"<<' '<<fRet;

    return 0;
}
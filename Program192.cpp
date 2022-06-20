#include<iostream>
using namespace std;

class ArrayX
{
    public:
    int *Arr;
    int size;

    ArrX(int value);
    ~ArrayX();
    void Accept();
    void Display();
    int Maximum();

};

ArrayX::ArrayX(int value)
    {
        size = value;
        Arr = new int[size];
    }

ArraryX::~ArrayX()
    {
        delete []Arr;
    }

void ArrayX::Accept()
    {
        cout<<"Enter the values"<<endl;
        for(int i = 0; i<size; i++)
        {
              cin>>Arr[i];
        }
    }
void ArrayX::Display()
    {
        cout<<"Values are"<<endl;
        for(int i = 0; i<size; i++)
        {
              cout<<Arr[i]<<endl;
        }
    }

    
int ArrayX::Maximum()
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

};

int main()
{
    ArrayX obj1(5);

    obj1.Accept();
    obj1.Display();


    return 0;
}
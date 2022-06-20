#include<iostream>
using namespace std;

class ArrayX
{
     public:
     int *Arr;
     int Size;

     ArrayX(int iValue)
     {
        Size = iValue;
        Arr = new int[Size];
     }

     ~ArrayX()
     {
         delete []Arr;
     }

     void Accept()
     {
         cout<<"Enter the values"<<endl;

         for(int i = 0; i < Size; i++)
         {
             cin>>Arr[i];
         }
     }

     
     void Display()
     {
         cout<<"values are"<<endl;

         for(int i = 0; i < Size; i++)
         {
             cout<<Arr[i]<<endl;
         }
     }
};


int main()
{
    ArrayX obj(5);
    obj.Accept();
    obj.Display();
    
    return 0;
}
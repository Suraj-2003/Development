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

     int Maximum()
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
};


int main()
{
    ArrayX obj(5);
    obj.Accept();
    obj.Display();
    int iRet = obj.Maximum();
    cout<<"Maximum number is:"<<iRet;
    return 0;
}
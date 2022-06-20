#include<iostream>
using namespace std;

class Pattern
{
    private:
       int iRow, iCol;
    
    public:
       Pattern(int iValue1, int iValue2)
       {
           this->iRow = iValue1;
           this->iCol = iValue2;
       }
       void DisplayPattern()
       {
           int i = 0, j = 0;

           for(i = 1; i <= iRow; i++)
           {
               for(j = 1; j <= i; j++)
               {
                    cout<<"*\t";
               }
               cout<<"\n";
           }

           for(i = iRow-1; i >= 1; i--)
           {
               for(j = 1; j <= i; j++)
               {
                    cout<<"*\t";
               }
               cout<<"\n";
           }
           
       }
};

int main()
{
    int iValue1 = 0, iValue2 = 0;

    cout<<"Enter number of rows"<<endl;
    cin>>iValue1;

    cout<<"Enter number of columns"<<endl;
    cin>>iValue2;

    Pattern obj(iValue1, iValue2);
    obj.DisplayPattern();
}
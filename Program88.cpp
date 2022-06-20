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
           
           if(iRow != iCol)
           {
              cout<<"Invalid input\n";
              return;
           }

           for(i = 1; i <= iRow; i++)
           {
               for(j = 1; j <= iCol; j++)
               {
                    if(i == j)
                    {
                        cout<<"$"<<"\t";
                    }
                    else
                    {
                        cout<<j<<"\t";
                    }
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
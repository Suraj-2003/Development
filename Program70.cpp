#include<iostream>
using namespace std;

class ArrayX
{
    private:
        int *Arr;
        int iSize;

    public:
        ArrayX(int iValue)              
        {
            this->iSize = iValue;
            Arr = new int[iSize];     
        }

        ~ArrayX()                     
        {
            delete []Arr;               
        }

        void Accept()   
        {
            int iCnt = 0;
            cout<<"Enter the elements"<<endl;
            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
              cin>>Arr[iCnt];
            }
        }
        // Positive & Negative
        int Maximum()
        {
            int iCnt = 0;
            int iMax = Arr[iCnt];

            for(iCnt = 0; iCnt< iSize; iCnt++)
            {
               if(iMax < Arr[iCnt])
               {
                   iMax = Arr[iCnt];
               }
            }
            return iMax;
        }

};

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter the number of elements:"<<endl;
    cin>>iValue;

    ArrayX obj1(iValue);

    obj1.Accept();      
    iRet = obj1.Maximum();     
    cout<<"Maximum number is: "<<iRet<<endl;
    
    return 0;
}
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
        int Minimum()
        {
            int iCnt = 0;
            int iMin = Arr[iCnt];

            for(iCnt = 0; iCnt< iSize; iCnt++)
            {
               if(iMin > Arr[iCnt])
               {
                   iMin = Arr[iCnt];
               }
            }
            return iMin;
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
    iRet = obj1.Minimum();     
    cout<<"Minimum number is: "<<iRet<<endl;
    
    return 0;
}
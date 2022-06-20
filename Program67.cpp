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

        int CountEven()
        {
            int iCnt = 0;
            int iCount = 0;

            cout<<"Even Elements are "<<endl;
            for(iCnt = 0; iCnt< iSize; iCnt++)
            {
                if((Arr[iCnt] % 2) == 0)
                {
                    iCount++;               
                }
            }
            return iCount;
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
    iRet = obj1.CountEven();     
    cout<<"Number of even elements "<<iRet<<endl;
    
    return 0;
}
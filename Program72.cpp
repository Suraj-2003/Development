#include<iostream>
using namespace std;

class ArrayX
{
    private:
        int *Arr;
        int iSize;
        int iNo ;
        

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
            
            cout<<"Enter number to calculate frequency"<<endl;
            cin>>iNo; 
        }
        
        int Frequency()
        {
            int iCnt = 0;
            int iFrequency = 0;

            for(iCnt = 0; iCnt< iSize; iCnt++)
            {
               if(iNo == Arr[iCnt])
               {
                   iFrequency++;
               }
            }
            return iFrequency;
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

    iRet = obj1.Frequency();     
    cout<<"Frequency is: "<<iRet<<endl;
    
    return 0;
}
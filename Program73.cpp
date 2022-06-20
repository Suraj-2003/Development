#include<iostream>
using namespace std;

class ArrayX
{
    private:
       int *Arr;
       int iSize;
       int iNo;
    
    public:
       ArrayX(int iNo1)
       {
           this->iSize = iNo1;
           Arr = new int[iNo1]; 
       }
       void Accept()
       {
           int iCnt = 0;

           for(iCnt = 0; iCnt < iSize; iCnt++)
           {
               cout<<"Enter element: "<<iCnt+1<<endl;
               cin>>Arr[iCnt];
           }

           cout<<"Enter element to search"<<endl;
           cin>>iNo;
       }
       bool Search()
       {
           int iCnt = 0;
           bool bFlag = false;

           for(iCnt = 0; iCnt < iSize; iCnt++)
           {
               if(Arr[iCnt] == iNo)
               {
                   bFlag = true;
                   break;
               }
           }
           return bFlag;
       }

};

int main()
{
    int iLength = 0;
    bool bRet;

    cout<<"Enter the value of constructor"<<endl;
    cin>>iLength;

    ArrayX aobj(iLength);

    aobj.Accept();

    bRet = aobj.Search();
    
    if(bRet == true)
    {
        cout<<"Element is there in Array"<<endl;
    }
    else
    {
         cout<<"Element is not there in Array"<<endl;
    }

    

}

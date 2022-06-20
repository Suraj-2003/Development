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
       int SearchFirstOccurance()
       {
           int iCnt = 0;

           for(iCnt = 0; iCnt < iSize; iCnt++)
           {
               if(Arr[iCnt] == iNo)
               {
                   break;
               }
           }
           if(iCnt == iSize)
           {
               return -1;
           }
           else
           {
               return iCnt;
           }
       }

};

int main()
{
    int iLength = 0;
    int iRet;

    cout<<"Enter the value of constructor"<<endl;
    cin>>iLength;

    ArrayX aobj(iLength);

    aobj.Accept();

    iRet = aobj.SearchFirstOccurance();
    
    if(iRet == -1)
    {
        cout<<"There is no such element in Array"<<endl;
    }
    else
    {
         cout<<"Element first occured at: "<<iRet;
    }

    

}

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
       int SearchLastOccurance()
       {
           int iCnt = 0;

           for(iCnt = iSize-1; iCnt >= 0; iCnt--)
           {
               if(Arr[iCnt] == iNo)
               {
                   break;
               }
           }
           return iCnt;
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

    iRet = aobj.SearchLastOccurance();
    
    if(iRet == -1)
    {
        cout<<"There is no such element in Array"<<endl;
    }
    else
    {
         cout<<"Element Last occured at: "<<iRet;
    }

    

}

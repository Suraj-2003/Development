#include<iostream>
using namespace std;

class Number
{
    private:
        int iNo;        // Charactristics

    public:
        // Behaviours
        void Accept()       // Setter
        {
            cout<<"Enter the value : "<<endl;
            cin>>this->iNo;
        }

        void Display()      // Getter
        {
            cout<<"Value is : "<<this->iNo<<endl;
        }

        void DisplayNum()
        {
            int iCnt = 0;

            if(iNo < 0)
            {
                iNo = -iNo;
            }

            for(iCnt = 1; iCnt <= iNo; iCnt++)
            {
                cout<<iCnt<<endl;
            }
        }
};

int main()
{
    Number nobj;

    nobj.Accept();
    nobj.Display();

    nobj.DisplayNum();

    return 0;
}
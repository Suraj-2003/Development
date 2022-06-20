#include<iostream>
using namespace std;

class Result
{
    private:
        float fMarks;
    
    public:
        void Accept()
        {
            cout<<"Enter your marks"<<endl;
            cin>>fMarks;
        }
        void Display()
        {
            cout<<"Your Marks is:"<<fMarks<<endl; 
        }
        void DisplayClass()
        {
            if((fMarks > 0.0) && (fMarks < 35.0))
            {
                cout<<"You are fail"<<endl;
            }
            else if((fMarks >= 35.0) && (fMarks < 50.0))
            {
                cout<<"You are pass"<<endl;
            }
            else if((fMarks >= 50.0) && (fMarks < 60.0))
            {
                cout<<"You are second class"<<endl;
            }
            else if((fMarks >= 60.0) && (fMarks < 70.0))
            {
                cout<<"You are first class"<<endl;
            }
            else if((fMarks >= 70.0) && (fMarks <= 100.0))
            {
                cout<<"You are first class with distinction"<<endl;
            }
            else
            {
                cout<<"Invalid Marks"<<endl;
            }
        }
        
};

int main()
{
    Result robj;

    robj.Accept();
    robj.Display();

    robj.DisplayClass();
    
    return 0;
}
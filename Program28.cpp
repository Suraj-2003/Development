#include<iostream>
using namespace std;

class Jwelery
{
    private:
        int iWeight;
    
    public:
        void Accept()
        {
            cout<<"Enter the gold coin size that you want to purchase"<<endl;
            cin>>this->iWeight;
        }
        void Display()
        {
            cout<<"Entered size of gold coin is:"<<this->iWeight<<endl;
        }
        void jwelersPortal()
        {
            
          switch(iWeight)
          {
              case 1:
              cout<<"Your bill amount is 4000"<<endl;
              break;

              case 2:
              cout<<"Your bill amount is 8000"<<endl;
              break;

              case 3:
              cout<<"Your bill amount is 20000"<<endl;
              break;

              case 4:
              cout<<"Your bill amount is 40000"<<endl;
              break;

              default:
              cout<<"Invalid Weight";
              break;
          }
        }
};

int main()
{
    Jwelery jobj;

    jobj.Accept();
    jobj.Display();

    jobj.jwelersPortal();
    
    return 0;
}
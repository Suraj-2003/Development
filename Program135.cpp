#include<iostream>
using namespace std;

bool strcmpX(char *src, char *dest)
{
    while((*src != '\0') && (*dest != '\0'))
    {
        if(*src != *dest)
        {
            break;
        }

        src++;
        dest++;
    }

    if((*src == '\0') &&(*dest == '\0'))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    char Arr[20];
    char Brr[20];
    bool bRet;

    cout<<"Enter first string"<<endl;
    cin.getline(Arr,20);

    cout<<"Enter second string"<<endl;
    cin.getline(Brr,20);

    bRet = strcmpX(Arr, Brr);
 
    if(bRet == true)
    {
        cout<<"String are equal"<<endl;
    }
    else
    {
        cout<<"String are not equal"<<endl;
    }
    
    return 0;
}
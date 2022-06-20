#include<iostream>
using namespace std;

void strcpyX(char *src, char *dest)
{
    while(*dest != '\0')
    {
        dest++;
    }

    while(*src != '\0')
    {
        *dest = *src;

        dest++;
        src++; 
    }
    *dest = '\0';
}

int main()
{
    char Arr[20];
    char Brr[20];

    cout<<"Enter first string"<<endl;
    cin.getline(Arr,20);

    cout<<"Enter second string"<<endl;
    cin.getline(Brr,20);

    strcpyX(Arr,Brr);

    cout<<"String concatination"<<Brr<<endl;

    return 0;
}
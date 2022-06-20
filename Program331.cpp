#include<iostream>
using namespace std;

void swapR(int &p, int &q)
{
    int temp;
    
    temp = p;
    p = q;
    q = temp;
}

int main()
{
    int No1 = 11, No2 = 21;

    printf("Before swap data is: %d %d\n",No1, No2);

    swapR(No1, No2);

    printf("After swap data is: %d %d",No1, No2);

    return 0;
}
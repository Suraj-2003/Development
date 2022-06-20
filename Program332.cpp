#include<iostream>
using namespace std;

template <class T>  // template header
void swapR(T &p, T &q)
{
    T temp;
    
    temp = p;
    p = q;
    q = temp;
}

int main()
{
    int No1 = 11, No2 = 21;
    printf("Before swap data is: %d %d\n",No1, No2);
    swapR(No1, No2);
    printf("After swap data is: %d %\n",No1, No2);

    float fNo1 = 11.11, fNo2 = 21.11;
    printf("Before swap data is: %f %f\n",fNo1, fNo2);
    swapR(fNo1, fNo2);
    printf("After swap data is: %f %f\n",fNo1, fNo2);
   
    char cNo1 = 'A', cNo2 = 'B';
    printf("Before swap data is: %c %c\n",cNo1, cNo2);
    swapR(cNo1, cNo2);
    printf("After swap data is: %c %c",cNo1, cNo2);

    return 0;
}
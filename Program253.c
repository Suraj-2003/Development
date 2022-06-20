#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;
    int iEven = 0;
   
    for(iCnt = 2; iCnt <= iNo*2; iCnt++)
    {
        printf("%d\t",iCnt);
        iCnt = 1 + iCnt;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number of elements");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}


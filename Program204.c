#include<stdio.h>

void PrintEven(int iNo)
{
    if(iNo<=0)
    {
        return;
    }
    int iCnt = 2;
    for(iCnt = 2; iCnt<=iNo*2; iCnt++)
    {
        printf("%d\t",iCnt);
        iCnt++;
    }
}
int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    PrintEven(iValue);
    
    return 0;
}

// Time Complexity O(N*2)
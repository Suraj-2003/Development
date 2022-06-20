#include<stdio.h>

void DisplayASCII()
{
    int iCnt;

    for(iCnt = 0; iCnt <= 255; iCnt++)
    {
        printf("%c\t",iCnt);
        printf("%d\t",iCnt);
        printf("%x\t",iCnt);
        printf("%o\t",iCnt);
        printf("\n");
    }

}

int main()
{
    DisplayASCII();

    return 0;
}
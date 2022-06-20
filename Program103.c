#include<stdio.h>

void DisplayPattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    
    for(i = iRow; i >= 1; i--)
    {
        for(j = 1; j <= i; j++)
        {
            printf("*\t");
        }
        printf("\n");
    }
}
int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows\n");
    scanf("%d",&iValue1);

    printf("Enter number of columns\n");
    scanf("%d",&iValue2);

    DisplayPattern(iValue1, iValue2);

    return 0;
}
#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    int iEven = 0, iOdd = 0;

    for(i = 1; i<=iRow; i++)
    {
        for(j = 1,iEven = 2,iOdd = 1; j<=iCol; j++,iEven++,iOdd++)
        {
            if((i % 2) != 0)
            {
               printf("%d\t",iEven);
               iEven = 1 + iEven;
               
            }
            else
            {
                printf("%d\t",iOdd);
                iOdd = 1 + iOdd;
            }
        }
            printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows: ");
    scanf("%d",&iValue1);

    printf("Enter number of columns: ");
    scanf("%d",&iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}
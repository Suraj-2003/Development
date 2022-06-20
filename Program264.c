#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    int no = 0;

    no = 1;
    for(i = 1; i<=iRow; i++)
    {
        for(j = 1; j<=iCol; j++,no++)
        {
            if(no<10)
            {
            printf("%d\t",no);
            }
            else
            {
            printf("%d\t",no=1);
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
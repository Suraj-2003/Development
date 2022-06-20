#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    int iPtv = 0, iNev = 0;

    if(iRow<1) 
    {
       iRow = -iRow;
    }
    if(iCol<1)
    {
        iCol = -iCol;
    }

    for(i = 1; i<=iRow; i++)
    {
      for(j = 1,iPtv = -1, iNev = 1; j<=iCol; j++,iPtv--,iNev++)
        {
            if((i % 2) != 0)
            {
                printf("%d\t",iNev);
            }
            else
            {
                printf("%d\t",iPtv);
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
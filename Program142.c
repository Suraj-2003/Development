#include<stdio.h>

void Display(char ch)
{
    if((ch >= 'A') && (ch <= 'Z'))
    {
        int iCnt  = 0;

        for(iCnt = ch; iCnt <= 'Z';  iCnt++)
        {
            printf("%c\t",iCnt);
        }
    }
    else if((ch >= 'a') && (ch <= 'z'))
    {
        int iCnt  = 0;

        for(iCnt = ch; iCnt >= 'a';  iCnt--)
        {
            printf("%c\t",iCnt);
        }
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter the charecter\n");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}
#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOl ChkSmall(char ch)
{
    if((ch >= 'a') && (ch <= 'z'))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the charecter\n");
    scanf("%c",&cValue);

    bRet = ChkSmall(cValue);

    if(bRet == TRUE)
    {
        printf("It is Small case Charecter");
    }
    else
    {
        printf("It is not small case charecter");
    }

    return 0;
}
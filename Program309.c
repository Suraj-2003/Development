#include<stdio.h>

void StrNCpy(char *src, char *dest, int iCnt)
{

    while((*src != '\0')&& (iCnt != 0))
    {
        *dest = *src;

        src++;
        dest++;
        iCnt--;
    }

    *dest = '\0';
}

int main()
{
    char Arr[30];
    char Brr[30];

    printf("Enter string\n");
    scanf("%[^'\n']s",Arr);

    StrNCpy(Arr,Brr,10);

    printf("%s",Brr);
    
    return 0;
}
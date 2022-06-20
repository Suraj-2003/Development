#include<stdio.h>

void StrCpy(char *src, char *dest)
{
    while(*src != '\0')
    {
        *dest = *src;

        dest++;
        src++;
    }
    *dest = '\0';
}

int main()
{
    char Arr[30];
    char Brr[30];

    printf("Enter string\n");
    scanf("%[^'\n']s",Arr);

    StrCpy(Arr,Brr);

    printf("%s",Brr);
    
    return 0;
}
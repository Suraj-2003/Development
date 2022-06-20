#include<stdio.h>

void StrCpyX(char *src, char *dest)
{
    while(*src != '\0')
    {
        if(*src == ' ')
        {
            src++;
        }

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

    StrCpyX(Arr, Brr);

    printf("%s",Brr);

    return 0;
}
#include<stdio.h>

void StrCpyToogle(char *src, char *dest)
{
    while(*src != '\0')
    {
        if((*src >= 'A')&&(*src <= 'Z'))
        {
            *src = *src + 32;
        }
        else if((*src >= 'a')&&(*src <= 'z'))
        {
            *src = *src - 32;
        }

        *dest = *src;
        src++;
        dest++;
    }
    
    *dest = '\0';
}

int main()
{
    char Arr[30];
    char Brr[30];

    printf("Enter string\n");
    scanf("%[^'\n']s",Arr);

    StrCpyToogle(Arr, Brr);

    printf("%s",Brr);

    return 0;
}
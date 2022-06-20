#include<stdio.h>

void StrCpySmall(char *src, char *dest)
{
    while(*src != '\0')
    {
        if((*src >= 'A') && (*src <= 'Z'))
        {
            *src = *src + 32;
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

    StrCpySmall(Arr, Brr);

    printf("%s",Brr);

    return 0;
}
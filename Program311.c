#include<stdio.h>

void StrCpySmall(char *src, char *dest)
{
    while(*src != '\0')
    {
    
        if((*src >= 'a') && (*src <= 'z') || (*src == ' '))
        {
            *dest = *src;
            dest++;
        }
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

    StrCpySmall(Arr, Brr);

    printf("%s\t",Brr);

    return 0;
}
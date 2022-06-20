#include<stdio.h>

void StrCat(char *src, char *dest)
{
    while(*src != '\0')
    {
        src++;
    }

    while(*dest != '\0')
    {
          *src = *dest;

           src++;
           dest++;
    }
    *dest = '\0';
}
int main()
{
    char Arr[50] = "Marvellous Infosystem";
    char Brr[50] = " Logic Building";

    StrCat(Arr, Brr);

    printf("%s",Arr);

    return 0;
}